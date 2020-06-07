#include <bits/stdc++.h>
using namespace std;


int main(){
	char x, y; cin >> x >> y;
	if (x<y) cout << '<';
	if (x>y) cout << '>';
	if (x==y) cout << '=';
    return 0;
}
