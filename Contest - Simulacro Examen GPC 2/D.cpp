#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e5+5;
int n, a[maxn];

int main(){
	scanf("%d", &n);
	map<int, int> cnt;
	
	for(int i = 0; i<n; i++) 
		scanf("%d", &a[i]),
		cnt[a[i]]++;
	
	int ans = 0;
	for(auto &p: cnt){
		if (p.first > p.second) ans+= p.second;
		if (p.first < p.second) ans+= p.second - p.first;
	}
	printf("%d\n", ans);
	
    return 0;
}
