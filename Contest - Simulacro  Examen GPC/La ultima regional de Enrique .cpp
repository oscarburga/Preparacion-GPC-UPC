#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e5+5;
int n, a[maxn];

//Funcion para obtener el número con mayor cantidad de ocurrencias (ignorando un número prohibido).
pair<int, int> get_mayor_cuenta(map<int, int>& mapa, int prohibido){
	pair<int, int> ret = {-1, 0};

	for(pair<int, int> p: mapa) 
		if (p.first != prohibido && p.second>ret.second)
			ret = p;
	
	return ret;
}

int main(){
	scanf("%d", &n);
	for(int i = 0; i<n; i++) scanf("%d", &a[i]);

	//Cuento las ocurrencias de cada numero en las posiciones pares e impares
	//También pueden usar 2 arreglos de tamaño 10^5 para llevar las cuentas si no quieren usar map.
	map<int,int> cuenta_pares, cuenta_impares;
	
	for(int i = 0; i<n; i++)
		if (i%2) cuenta_pares[a[i]]++;
		else cuenta_impares[a[i]]++;

	//Obtengo los 2 numeros con mayores ocurrencias en posiciones pares
	pair<int, int> pares_max = get_mayor_cuenta(cuenta_pares, -1);
	pair<int, int> pares_max2 = get_mayor_cuenta(cuenta_pares, pares_max.first);

	//Obtengo los 2 numeros con mayores ocurrencias en posiciones impares
	pair<int, int> impares_max = get_mayor_cuenta(cuenta_impares, -1);
	pair<int, int> impares_max2 = get_mayor_cuenta(cuenta_impares, impares_max.first);

	int ans = 10000000;
	
	//Si los 2 numeros con mayores ocurrencias son diferentes, ellos son mi respuesta.
	if (pares_max.first != impares_max.first)
		ans = n - pares_max.second - impares_max.second;

	//De lo contrario, debo evaluar las posibles respuestas con los segundos mejores candidatos
	ans = min(ans, n - pares_max.second - impares_max2.second);
	ans = min(ans, n - pares_max2.second - impares_max.second);

	printf("%d\n", ans);
	
	return 0;
}
