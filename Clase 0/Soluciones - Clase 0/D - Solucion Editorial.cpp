/*
Problema D

Para resolver este problema debemos poder analizar los dígitos de un número, esto es algo sencillo si tenemos garantizado
que el número es positivo, ya que podemos analizar los dígitos en orden creciente (es decir, primero unidades, luego decenas, etc).
Eso se logra obteniendo el residuo de dividir entre 10 (así obtendremos el dígito de menor orden que queda) y luego de analizar
el dígito deberemos dividir entre 10 al número (esto es el equivalente a subir de orden, pero dividimos el número para poder
sacarle residuo respecto a 10 la siguiente vez) y así hasta que el número se vuelva 0. 
Nota: La división en cuestión es división entera.

De esta forma, podemos contar la cantidad de lucky digits (digitos que sean 4 o 7) con el siguiente bucle:

while(n > 0){
    if(n % 10 == 4 or n % 10 == 7) digits += 1;
    n /= 10;
}

Entonces, para determinar que la variable digits sea un lucky number podemos usar exactamente el mismo bucle con una variable de
tipo bool que determine si el número es lucky o no (Si encontramos un dígito que no sea 4 ni 7 la volveremos falsa).
Nota: Recordemos que 0 no es un lucky number, así que la variable booleana debe estar inicializada con el valor de verdad de la
proposición digits > 0 y luego ser actualizada con la iteración.

Complejidad: O(logn) ya que la cantidad de dígitos en base 10 de n está acotada por log10(n) + 1

Implementación en C++:
*/
#include<bits/stdc++.h>
using namespace::std;

long long n;

int main(){
    scanf("%lld",&n);
    int digits = 0;
    while(n > 0){
        if(n % 10 == 4 or n % 10 == 7) digits += 1;
        n /= 10;
    }
    bool lucky = digits > 0;
    while(digits > 0){
        if(digits % 10 != 4 and digits % 10 != 7) lucky = false;
        digits /= 10;
    }
    puts(lucky?"YES":"NO");
    return 0;
}
