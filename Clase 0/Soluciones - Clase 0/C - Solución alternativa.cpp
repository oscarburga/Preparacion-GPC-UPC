#include <bits/stdc++.h>
using namespace std;

/* EXPLICACIÓN:
Solución alternativa en O(N) para el problema C:

Observar que si fijamos una posicion en la que tenemos una 'A', el número de formas para construir una cadena "QAQ"
utilizando esa 'A' va a ser igual a la cantidad de Q's a la izquierda de la 'A', multiplicada por la cantidad de 'Q's
a la derecha de la 'A' (Si no entienden por qué, prueben un pequeño caso a mano: Supongan que tienen 4 Qs a la izquierda 
y 3 Qs a la derecha, y una A en medio).

Denotemos la cantidad de Qs a la izquierda como L, la cantidad de Qs a la derecha como R, y la cantidad total de Qs como T.

Entonces, para cada 'A' que encontremos, podemos agregar a la respuesta final el producto de L y R en esa posición. El detalle es:
¿Cómo calcular L y R para todas las 'A's eficientemente?

Podemos contar la cantidad totales de Q que existen y mantener un contador para L (inicializado en cero). 
Conforme recorremos la cadena buscando las 'A's, incrementamos este contador en 1 si encontramos alguna Q.

Entonces, si yo encuentro una 'A', y sé cuantas Qs hay a su izquierda (lo tengo en mi variable L), y también se
cuantas Qs hay en toda la cadena (lo tengo en mi variable T), puedo calcular la cantidad de Qs a su derecha (R),
ya que esta sera simplemente T - L (cantidad total de Qs, menos la cantidad de Qs a la izquierda).

Ahora que tengo L y R, puedo simplemente añadir su producto a mi respuesta final.

Implementación:
*/

int main(){
    //Leo el input
    string s; 
    cin >> s;

    //Inicializo variables
    int N = s.size();
    int T = 0, L = 0, R = 0;

    //Contar Qs
    for(int i = 0; i<N; i++)
        if (s[i] == 'Q') T++;

    //Loop principal: Buscar As y contar las Qs que encuentre en el camino
    int ans = 0;
    for(int i = 0; i<N; i++){
        if (s[i] == 'Q') L++; //encontré una Q en el camino
        else if (s[i] == 'A'){
            //encontré una A
            R = T - L;
            ans += L*R;
        }
    }
    cout << ans << endl;
    return 0;
}
