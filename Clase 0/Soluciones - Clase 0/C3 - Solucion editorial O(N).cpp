/*
Como última optimización del problema, para poder llegar a una solución O(n) debemos considerar el manejar
todas las subsecuencias posibles, es decir, mantener la cantidad de subsecuencias Q, QA y QAQ, ya que de esta
manera podemos manipular los valores considerando lo siguiente:

1) Si la nueva letra a analizar es una Q, entonces la cantidad de subsecuencias Q aumenta en 1 y la cantidad de
subsecuencias QAQ aumenta en la cantidad de subsecuencias QA (ya que para cada una de estas subsecuencias, el 
añadirle esta letra al final la vuelve una subsecuencia QAQ).

2) Si la nueva letra a analizar es una A, entonces la cantidad de subsecuencias QA aumenta en la cantidad de
subsecuencias Q (por el mismo argumento que en el punto anterior para la QAQ)

Al final la respuesta será la cantidad de subsecuencias QAQ.

Implementación O(n) en C++:
*/
#include<bits/stdc++.h>
using namespace::std;

const int N = 100+5;

int n;
char s[N];
int noQ = 0;
int noQA = 0;
int noQAQ = 0;

int main(){
    scanf("%s",s);
    n = strlen(s);
    int ans = 0;
    for(int i=0; i<n; i++){
        if(s[i] == 'Q'){
            noQ += 1;
            noQAQ += noQA;
        }
        if(s[i] == 'A'){
            noQA += noQ;
        }
    }
    printf("%d\n",noQAQ);
    return 0;
}
