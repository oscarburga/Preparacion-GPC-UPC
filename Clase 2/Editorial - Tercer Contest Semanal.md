## A - Coins Distribution

Como se nos pide que cada grupo no tenga 2 monedas iguales, la primera observación que debemos hacer es que si tenemos una
moneda con K ocurrencias, igual solo puede haber como máximo una en cada grupo, por lo que deberíamos simplemente tratar de poner las K monedas en los primeros K grupos. De igual forma, sabemos que en total solo pueden haber 10^6 monedas y solo asignaremos cada moneda una sola vez. Por lo tanto, si podemos encontrar una forma de asignar cada moneda a un grupo en O(1), tendremos una solución con complejidad total en O(N). Ahora, la parte interesante es: ¿Cuál es la manera óptima de asignar monedas a los grupos?

Como se nos pide maximizar la cantidad de grupos de monedas completos, deberíamos asignar las monedas de las cuales tenemos una mayor cantidad de repetidos primero, y las debemos asignar a los grupos siguiendo un mismo orden o sentido (asignar a los grupos desde la izquierda hacia la derecha por ejemplo). De este modo, garantizamos que un grupo se llenará únicamente si todos los grupos de su izquierda ya se han llenado.

Para simular este procedimiento, podemos crear inicialmente un deque o un arreglo de 10^6 pares {cantidad, moneda} para mantener la cuenta de cuántas monedas de cada tipo tenemos. Luego ordenamos este arreglo/deque de pares por orden de mayor cantidad. Si no sabían establecer un comparador para ordenar de mayor a menor, podían simplemente hacer un sort() normal (para ordenar de menor a mayor) y luego llamar a la función reverse() para finalmente tener el arreglo ordenado de mayor a menor. Adicionalmente, vamos a necesitar un deque de vectores de enteros para representar nuestros grupos. 

Ahora que tenemos las monedas ordenadas por cantidad, simplemente nos queda simular el procedimiento:
- Tomo el primer par que no he procesado aún y VERIFICO QUE TENGA CANTIDAD MAYOR A CERO. Si tiene cantidad = 0, debemos salir del ciclo ya que significa que no nos queda ninguna moneda pendiente.
- Digamos que el primer par tenía K como valor de ocurrencias. Entonces itero sobre los primeros K vectores en mi deque y les hago push_back(moneda) a cada uno. Si uno de los vectores llega a tener el tamaño límite (H), entonces debo imprimir su contenido y eliminarlo de mi deque (pop_front()). Esta es la principal razón por la que llenamos de izquierda a derecha y por orden de ocurrencias, ya que así garantizamos que si un vector se llena, siempre será el primero en mi deque, y puedo simplemente eliminarlo.
- Durante el procedimiento anterior, debería mantener un booleano que me diga si ya he poppeado algun vector o aún no, de tal forma que cuando me quede sin monedas, puedo verificar si llegué a llenar algún grupo o no, y en caso de que no, imprimo "impossible".

Finalmente, tenemos O(NlogN) para realizar el ordenamiento de los pares y O(N) para simular el procedimiento de asignación a los grupos, por lo que tenemos como complejidad final O(NlogN), lo cual es suficiente para pasar el limite de tiempo sin problemas.

## B - Balanced Brackets
Podemos solo simular como es que se va armando el string de izquierda a derecha.
Cada vez que tenemos un caracter que sea de apertura ( , { o [ , lo metemos a nuestra pila.
Cuando tenemos uno de cierre, claramente necesitamos que el caracter que esta al comienzo de la pila sea del mismo tipo.
Si es } el tope de la pila debe ser {, y asi para los otros dos tipos.
Si no fuera asi o si la pila estuviera vacia, sabemos que no estara balanceado autmaticamente y podemos solo parar de recorrer el string.
Si sí es pareja solo lo removemos de la pila.

Sin embargo solo ver eso no es suficiente ya que siguiendo ese algoritmo el string: {}(()){{{{{ daria que es valido, pero no lo es porque tenemos 
caracteres de abertura que no tienen pareja. Entonces tambien tenemos que verificar si la pila de caracteres de abertura esta vacio,
ya que eso significaria que todos los de abertura econtraron pareja.

## C - Gracias Racso por pasar el problema a Polygon
Claramente si volteamos el string en cada consulta de tipo 1 o intentamos agregar un caracter al comienzo tendriamos de veredicto
time limit, ya que voltear un string toma O(n) y agregar un caracter al cominezo es la misma complejidad de crear un nuevo string lo cual tambien
seria O(n). Entonces nos damos cuenta que realmente lo unico que queremos saber para cada query es en que estado esta mi string, si
esta volteado o no. Podemos usar un deque para eso. Al comienzo metemos todos los caracteres a la estrucutra de datos.
Luego un booleano que nos diga si es que el string esta volteado o no. Asi al querer agregar un caracter, si mi string esta volteado solo significa que mis extremos cambian.
Si tengo en mi deque [a,b,c,d,e] mi inicio seria antes de la 'a' y el final luego de la 'e', pero si esta volteado 'a' seria el final y 'e'
seria el comienzo. Entonces sabemos donde tenemos que insertar.

## D - Table Tennis 
Si el numero de ganadas K es mayor o igual al numero de personas que tengo es claro que siempre ganara la persona mas poderosa. 
De otra manera podemos solo simular el proceso ya que K seria <= 500 y a lo mas tendriamos complejidad de O(N + K).

## E - Equal Stacks
Solo necesitamos simular el proceso, podemos tener una varibale que nos diga la altura de cada pila. Entonces sumamos el valor que 
tenemos disponible a nuestras alturas. Luego de eso una de estas tres alturas sera mayor y podemos intentar hacer las otras dos pilas
iguales a este valor mayor. Y solo seguir ese proceso hasta que nos quedemos sin mas valores disponibles que agregar. Para este problema
podemos usar stack o vector simplemente.

## F - Cd and pwd commands 
Podemos solo simular el proceso con una pila o vector de strings. Si mi vector esta vacio cuando me dan pwd imprimo "/", si no
imprimo todos los strings que tengo separaados por "/" . Cuando me dan cd cada vez que tengo un .. solo elimino el final de 
los directorios, si no agrego el directorio que me dan.

## G - Maximum Element 
Primero pensemos en como es que este proceso se daria:
Agregamos 1 -> Cola: 1, Maximo : 1. Agregamos 2 -> Cola: 1, 2, Maximo: 2. Agregamos 0 -> Cola: 1,2,0, Maximo: 2
Nos damos cuenta que al agrear un valor nuevo siempre el maximo o aumentara o sea quedara igual que antes.
Para eso podemos solo, cada vez que tenemos un nuevo valor que agregar vemos si este valor es mayor a el tope de la pila
o no, si no es. Entonces podemos solo agregar un duplicado del tope. Si no, agregamos el valor que nos dan. Para el ejemplo de arriba nuestra
pila seria: [1,2,2] en lugar de que sea [1,2,0].


## H - Throwing cards away I 
Podemos simular el proceso con un deque ya que tenemos que retirar de adelente y luego la nueva de adelante pasarla al final. 

## I - Plug-in 
Podemos ir simulando el proceso de izquierda a derecha. Si el caracter que tengo es igual al tope de mi pila siginifica que
deben ser borradas, entonces elimino el tope de mi pila y no agrego el caracter. Si son difrentes si lo agrego a la pila.
Luego de esto ya tendrmos en la pila cuales son los que quedaron leugo del proceso pero estara al reves, asi que podemos solo 
tener un string donde pondremos los elementos que quedaron en la pila y imprimirlo al reves.

## J - Problema extra: Red and Green Apples:
Tenemos que pensar en cómo podemos establecer una manera sencilla de seleccionar qué manzanas comeremos. 


¿Cuándo me conviene reemplazar una de mis manzanas rojas o verdes por una sin pintar? Evidentemente,cuando haya una descolorada que tenga mayor valor que una roja o verde.

¿Cómo sé qué manzana debería reemplazar y por cuál? Siempre debes reemplazar la de mínimo valor por la de máximo valor. Este movimiento siempre es óptimo. ¿Por qué? Supón que tienes 2 manzanas pintadas (cualquier color) A,B con A<B, y tienes otras 2 manzanas sin pintar C y D con C<D y se cumple que A<C<B<D (solo vemos este caso porque A<B<C<D y D<C<B<A son triviales, simplemente reemplazas ambas manzanas o ninguna, respectivamente). Reemplazar A por D va a ser mejor que reemplazar A por C y B por D. Consideremos la primera opción (reemplazar A por D). Entonces tendremos  D+B-A-B = D-A como nueva ganancia. Consideremos la segunda opción (reemplazar A por C y B por D). Entonces tendremos C+D-A-B como nueva ganancia. Sin embargo, como sabemos que C<B,Entonces C-B va a ser un número negativo, por lo que tendremos C+D-A-B = D-A+X con X<0, entonces se cumple que D-A>D-A+X (porque X es negativo).

Ahora que tenemos una estrategia para reemplazar las manzanas, lo único que debemos hacer es simular el procedimiento y tener cuidado con no pasarnos del límite de rojos y verdes permitidos. Esto se puede hacer de manera sencilla con deques/colas si ordenamos los valores de cada coleccion (rojos, verdes y sin pintar) y simplemente hacemos pop_front en rojos/verdes y push_back para reemplazar el mínimo rojo/verde por el máximo sin pintar. Si ya no tenemos ninguna manzana sin pintar que sea mayor a alguna de las pintadas, entonces terminamos el procedimiento y el valor de cada manzana para obtener nuestra respuesta final.

Complejidad total O(AlogA+BlogB+ClogC) para ordenar cada conjunto, ya que el resto del procedimiento es lineal.
