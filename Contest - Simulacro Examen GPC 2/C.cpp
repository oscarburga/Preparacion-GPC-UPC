#include <bits/stdc++.h>
using namespace std;

const int maxn = 105;
int n, s[maxn];

int main(){
	cin >> n;
	for(int i = 0; i<n; i++) cin >> s[i];
	int min_no_multiplo = 200;
	int sum = 0;
	for(int i = 0; i<n; i++){
		sum += s[i];
		if (s[i] % 10 > 0)
			min_no_multiplo = min(min_no_multiplo, s[i]);
	}
	if (sum % 10 > 0) cout << sum;
	else if (min_no_multiplo < 200) cout << sum-min_no_multiplo;
	else cout << 0;
	cout << '\n';
    return 0;
}
