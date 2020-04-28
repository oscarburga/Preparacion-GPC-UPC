
/*
Problema A

Para resolver este problema basta con notar que solo tenemos que simular, ya que habrán un máximo de 50 pasos
y nos garantizan que la respuesta será un entero positivo.

Para simularlo uno puede usar una función recursiva o una versión iterativa, el código mostrado plantea un for
para la ejecución de los k pasos y un condicional para diferenciar en qué caso se está. 
Notemos que el condicional toma n % 10 como verdadero si el resultado de dicha operación no es 0 y toma falso si el resultado es 0.

Complejidad: O(k)
Implementación en C++:
*/

#include<bits/stdc++.h>
using namespace::std;

int n, k;

int main(){
    scanf("%d %d",&n,&k);
    for(int i=0; i<k; i++){
        if(n % 10) n -= 1;
        else n /= 10;
    }
    printf("%d\n",n);
    return 0;
}
