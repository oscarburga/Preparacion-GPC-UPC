#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e6+5;
int n, h, x;
pair<int,int> cnt[maxn];
deque<vector<int>> groups; 


int main(){
	scanf("%d %d", &n, &h);
	for(int i = 0; i<maxn; i++) cnt[i] = {0, i};
	for(int i = 0; i<n; i++) scanf("%d", &x), cnt[x].first++;
	sort(cnt, cnt+maxn, greater<pair<int, int>>());
	int spos = 0;
	groups.resize(maxn);
	bool ans = 0;
	for(int l = 0; l<maxn; l++) {
		int ppb = 0;
		for(auto&v: groups) {
			if (cnt[l].first<=0) break;
			cnt[l].first--;
			v.push_back(cnt[l].second);
			if (v.size() == h) ppb++;
		}
		ans|=ppb>0;
		while(ppb--) {
			for(auto&x: groups.front()) printf("%d ", x);
			puts("");
			groups.pop_front();
		}
	}
	if (!ans) puts("impossible");
	
	
	return 0;
}
