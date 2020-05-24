#include <bits/stdc++.h>
using namespace std;


//Ejercicio Propuesto 1
void modificarllaveMapa(map<int,int>& m, int x, int y){
	if (m.count(x)){
		int valorAsociado = m[x];
		m.erase(x);
		m[y] = valorAsociado;
	}
}
void modificarllaveSet(set<int>& m, int x, int y){
	if (m.count(x)){
		m.erase(x);
		m.insert(y);
	}
}

//Ejercicio Propuesto 2
map<int, int>::iterator first_less_than(map<int, int>& m, int x){
	if (m.size() == 0) return m.end();
	auto it = m.lower_bound(x);
	if (it == m.begin()) return m.end();
	it--;
	return it;
	//es lo mismo que it--; return it;
	//return --it;
}

//Ejercicio Propuesto 3
int main(){
	vector<int> a = {5, 5, 5, 7, 5, 7, 7};
	int n = a.size();
	int k = 12;
	long long ans = 0;
	map<int, int> cnt;
	// K = 12 -> cuantos 12-5 tengo a su derecha -> 12-5 = 7
	// mantengo un mapa con la cuenta de cada elemento que aparece
	//  5, 5, 5, 7, 5, 7, 7
	// +3, +3, +3, +1, +2 -> ans = 12
	//si yo estoy buscando a[i]+a[j]=K -> a[j] = K-a[i]
	
	for(int i = n-1; i>=0; i--){ //O(n)
		int necesito = k-a[i]; //O(1)
		if (cnt.count(necesito)) ans+= cnt[necesito]; //Accesos O(logN)
		cnt[a[i]]++; //Acceso en O(logN)
		 //cnt[7]++, por ejemplo; 
	}	//Complejidad total: O(N*logN)
	cout << ans << endl;
	return 0;
}
