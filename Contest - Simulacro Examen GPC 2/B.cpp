#include <bits/stdc++.h>
using namespace std;

const int maxn = 105;
int n, a[maxn], papu, popa;
int main(){
	cin >> n;
	for(int i = 0; i<n; i++) cin >> a[i];
	sort(a, a+n); 
	bool turno_popa = true;
	for(int i = n-1; i>=0; i--){
		if (turno_popa) popa+= a[i];
		else papu += a[i];
		turno_popa = !turno_popa;
	}
	cout << popa-papu << '\n';
	
    return 0;
}
