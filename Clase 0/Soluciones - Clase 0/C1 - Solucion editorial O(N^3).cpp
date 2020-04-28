/*
Problema C

Para resolver este problema debemos considerar que, al pedirnos subsecuencias, podemos tomar índices que no sean consecutivos;
sin embargo, aprovecharemos que la longitud de la palabra a buscar es pequeña, así que para obtener una solución O(n³)
podemos simplemente fijar las 3 posiciones de la subsecuencia y verificar que los elementos (en ese orden) sean las letras Q, A, Q.
Implementación O(n³) en C++:

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
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(s[i] == 'Q' and s[j] == 'A' and s[k] == 'Q') ans += 1;
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}
