#include <bits/stdc++.h>
//bits/stdc++ es una librer�a que incluye a todas las librer�as de C++
//solo funciona con el compilador G++ y GCC, no funciona en Visual
using namespace std;



/*
	Tanya esta aprendiendo a restar uno a los n�meros enteros que tengan 
	2 d�gitos o m�s, pero ha aprendido algo raro. Para restar, ella hace
	lo siguiente:
	
		*Si el �ltimo digito del n�mero es diferente de cero, ella le resta 1
		 al n�mero
		*Si el �ltimo digito del n�mero es cero, ella divide el numero entre 10
		
	Te dan dos n�meros N y K, Tanya va a realizar la operaci�n al 
	n�mero N, K veces.
	
	Imprime el n�mero N despu�s de las K operaciones.

*/

//Lenguaje GNU G++14 6.4.0
//Control + A
// F11 para ejecutar en DevC++
int main(){
	int n, k;
	cin >> n >> k;
	//scanf("%d %d", &n, &k);
	//en el futuro, algunos problemas podr�an botarles Tiempo de Limite
	//Excedido usando cin, en esos casos deben probar con scanf
	
	/*
		while(k>0){
			if (n%10 > 0) 
				n = n-1;
			else 
				if (n%10 == 0) 
					n = n/10;
			k = k-1;
		}
	
	*/

	for(int operaciones = 0; operaciones < k; operaciones=operaciones+1){
		//El for lo �nico que hace es contar la cantidad de operaciones
		// que realizamos
		if (n%10 > 0) 
			n = n-1;
		else 
			if (n%10 == 0) n = n/10;
	}
	
	cout << n << endl;
	return 0;
}
