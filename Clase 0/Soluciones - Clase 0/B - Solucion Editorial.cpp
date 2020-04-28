/*
Problema B

Para resolver este problema debemos considerar que solamente hay dos posibilidades para los puntos:
Estar a la izquierda o a la derecha del eje Y, y dicho valor estará determinado por el signo de su componente en el eje X.
La pregunta se transforma a verificar si alguno de los dos grupos tiene un elemento o es un conjunto vacío, 
así que mantendremos un contador por cada grupo, llamados L (izquierda, x < 0) y R (derecha, x > 0) para finalmente verificar
que el mínimo de dichos contadores sea <= 1, ya que si alguno de los dos cumple en ser menor o igual a 1, 
en particular el mínimo de ellos también debería cumplir (ya que min(a, b) <= a y min(a,b) <= b).

Complejidad: O(n)
Implementación en C++:
*/

#include<bits/stdc++.h>
using namespace::std;

int n;
int L = 0;
int R = 0;

int main(){
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        int x, y;
        scanf("%d %d",&x, &y);
        if(x < 0) L += 1;
        else R += 1;
    }
    puts(min(L, R) <= 1?"Yes":"No");
    return 0;
}
