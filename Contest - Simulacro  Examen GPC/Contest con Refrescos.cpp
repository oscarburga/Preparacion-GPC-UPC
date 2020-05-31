#include <bits/stdc++.h>
using namespace std;

const int maxn = 100+5;
int n, m, t[maxn];

int main(){
	scanf("%d", &n);
	int suma_tiempos = 0;
	
	for(int i = 1; i<=n; i++) {
		scanf("%d", &t[i]);
		suma_tiempos += t[i]; //Obtengo la suma total de los tiempos
	}
	
	scanf("%d", &m);
	for(int i = 1; i<=m; i++) {
		int pi, xi;
		scanf("%d %d", &pi, &xi);
		
		int suma_nueva = suma_tiempos;
		
		//Quito el tiempo original para resolver el problema P_i
		suma_nueva -= t[pi];
		
		//Añado el nuevo tiempo para resolver el problema P_i
		suma_nueva += xi;
		
		printf("%d\n", suma_nueva);
	}
}


