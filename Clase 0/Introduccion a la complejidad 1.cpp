
#include <bits/stdc++.h>
using namespace std;

/*
	Te dan N puntos en un plano 2D (x, y), ninguno se ubica sobre el eje Y.

	Analisis: Ningun punto tiene X = 0
	
	Revisa si existe un punto tal que, si lo eliminas, todos los demás puntos
	estarán ubicados en un solo lado del eje Y.
	
	Analisis: 
		Si quito un punto, todos los demás deben tener:
			X positivo o todos X negativo
		El Y no importa, no tengo ninguna restriccion con el
		
	
	Limites:
	N <= 10^5
	|Xi, Yi| <= 10^9

*/


const int maxn = 100000+5;
int N;
// X[maxn], Y[maxn]; 
//Un arreglo es basicamente una lista de elementos

/*
	Analizar cuanto tardara una solucion
	O(expresion matematica)
	
	N -> hasta 100000
	
	Para los N puntos, yo voy a procesar N puntos
	Voy a revisar todos los puntos N veces
	
	N operaciones generales
	cada operacion general involucra revisar N puntos
	
	N*N = N^2 
	
	N = 10^5 * 10^5  = 10^10
	Aprox. operaciones por segundo: 10^8
	
	Nuestra solucion directa funcionaría si tuvieramos hasta 10^4
	10^4 * 10^4 = 10^8
	
	O(N^2) -> tenemos que reducirlo O(N)	
	Puedo solo revisar si existe un solo punto con X negativo o un solo punto
	con X positivo
	
*/


int main(){
	/*
	cin >> N;
	int x, y;
	for(int numero = 0; numero < N; numero++){
		cin >> x >> y;
		X[numero] = x;
		Y[numero] = y;
	}
	//solucion directa (TLE): probar quitar todos los puntos
	// y ver si todos los demas son o positivos o negativos
	/*
	for(int quito = 0; quito<N; quito++){
		int pos = 0, neg = 0;
		for(int quedo = 0; quedo<N; quedo++){
			if (quito != quedo){
				if (X[quedo] < 0) neg++;
				else if (X[quedo] > 0) pos++;
			}
		}

		if (neg == 0 || pos == 0){
			cout << "Yes" << endl;
			return 0;
		}
	}
	*/
	
	//implementacion "inteligente": O(N)
	cin >> N;
	int x, y, pos = 0, neg = 0;
	for(int numero = 0; numero<N; numero++){
		cin >> x >> y;
		if (x<0) neg++;
		else if (x>0) pos++;
	}
	// si tengo 1 o menos negativos O uno o menos positivos
	if (neg <= 1 || pos <= 1) 
		cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
