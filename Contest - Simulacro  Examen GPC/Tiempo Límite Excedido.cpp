#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, t;
	scanf("%d %d", &n, &t);
	
	int minimo = 10000;
	for(int i = 0; i<n; i++){
		int ci, ti;
		scanf("%d %d", &ci, &ti);
		
		//Si el tiempo de esta ruta es menor o igual a t, entonces minimizo la respuesta con su costo
		if (ti<=t)
			minimo = min(minimo, ci);
	}
	
	//Si nunca minimicé la respuesta, no existe ruta, de lo contrario, imprimo la respuesta.
	if (minimo == 10000) puts("TLE");
	else printf("%d\n", minimo);
}
