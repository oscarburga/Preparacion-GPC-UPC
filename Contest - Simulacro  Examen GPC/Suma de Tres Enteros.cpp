#include <bits/stdc++.h>
using namespace std;

int main(){
	int K, S, ans = 0;
	scanf("%d %d", &K, &S);

	//Fijo el valor de X
	for(int X = 0; X <= K; X++){
	
		//Fijo el valor de Y
		for(int Y = 0; Y <= K; Y++){
			
			//Obtengo el único valor que podría tomar Z para que se cumpla X+Y+Z = S
			int Z = S - X - Y;
			
			//Valido que Z esté en el rango permitido, y en ese caso, aumento mi respuesta
			if (Z >= 0 && Z <= K)
				ans++; 
		}
	}
	
	printf("%d\n", ans);
}


