#include <bits/stdc++.h>
using namespace std;

/*
	Te dan N puntos en un plano 2D (x, y), ninguno se ubica sobre el eje Y.
	
		Analisis: Ningun punto tiene coordenada X = 0
	
	Revisa si existe un punto tal que, si lo eliminas, todos los demás puntos
	estarán ubicados en un solo lado del eje Y.
	
	Analisis: 
		Si quito un punto, todos los demás deben tener:
			X positivo o todos X negativo
		El Y no importa, no tengo ninguna restriccion con el
		
		
	Limites:
	N <= 10^5
	|Xi, Yi| <= 10^9
	X =/= 0

*/

const int maxn = 100000+5;
int n, x, y;

int main(){
	//cin >> n;
	scanf("%d", &n);
	int pos = 0, neg = 0;
	for(int i = 0; i<n; i++){
		scanf("%d %d", &x, &y);
		if (x<0) neg++;
		if (x>0) pos++;
	}
	if (pos<=1 || neg<=1) puts("Yes");
	else puts("No");
	return 0;
	
	/*
		Reviso los N puntos -> O(N) 	
		Para cada punto que reviso, voy a revisar N puntos más
	
		N operaciones generales
			por cada operacion general, hago N operaciones
		N * N operaciones en total?
		O(N^2) -> estamos haciendo 10^5 * 10^5 = 10^10 operaciones
		
		Las computadoras de los jueces realizan aprox 10^8 operaciones
			por segundo
		
		Nuestra solucion cuadrática funcionaria hasta aprox N = 10^4
			10^4 * 10^4 = 10^8
		
		Reducir O(N^2) -> O(N)
		
		Para que exista respuesta:
			En primer lugar, debe haber máximo 1 positivo y el resto
			todos con X negativo, o viceversa.
	*/
}
