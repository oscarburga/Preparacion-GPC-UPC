/*
Para optimizar esta solución a O(n²) notamos que si fijamos los dos extremos (las dos posiciones que sean Q),
entonces la cantidad de veces que se formará la palabra será igual a la cantidad de posiciones entre ellos que tengan la letra A,
así que para esto podemos fijar el extremo izquierdo i (solo si es una Q) y a medida que iteramos con la variable j desde (i+1)
hasta (n-1) mantendremos un contador de la cantidad de A que hay hasta ahora, con la finalidad de que cuando s[j] == 'Q'
le sumemos a la respuesta el valor actual de dicho contador.
Ya que solamente usaremos dos for anidados, la complejidad se reduce a O(n²).

Implementación O(n²) en C++:
*/
#include<bits/stdc++.h>
using namespace::std;

const int N = 100+5;

int n;
char s[N];

int main(){
    scanf("%s",s);
    n = strlen(s);
    int ans = 0;
    for(int i=0; i<n; i++){
        if(s[i] != 'Q') continue;
        int As = 0;
        for(int j=i+1; j<n; j++){
            if(s[j] == 'Q'){
                ans += As;
            }
            if(s[j] == 'A') As += 1;
        }
    }
    printf("%d\n",ans);
    return 0;
}
