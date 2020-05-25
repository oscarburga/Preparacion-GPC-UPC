## B - Balanced Brackets
Podemos solo simular como es que se va armando el string de izquierda a derecha.
Cada vez que tenemos un caracter que sea de abertura ( , { o [ , lo metemos a nuestra pila.
Cuando tenemos uno de cierre, claramente necesitamos que el caracter que esta al comienzo de la pila sea del mismo tipo.
Si es } el tope de la pila debe ser {, y asi para los otros dos tipos.
Si no fuera asi o si la pila estuviera vacia, sabemos que no estara balanceado autmaticamente y podemos solo parar de recorrer el string.
Si si es pareja solo lo removemos de la pila.

Sin embargo solo ver eso no es suficiente ya que siguiendo ese algoritmo el string: {}(()){{{{{ daria que es valido, pero no lo es porque tenemos 
caracteres de abertura que no tienen pareja. Entonces tambien tenemos que verificar si la pila de caracteres de abertura esta vacio,
ya que eso significaria que todos los de abertura econtraron pareja.

## C - Gracias Racso por pasar el problema a Polygon (?
Claramente si volteamos el string en cada consulta de tipo 1 o intentamos agregar un caracter al comienzo tendriamos de veredicto
time limit, ya que voltear un string toma O(n) y agregar un caracter al cominezo es la misma complejidad de crear un nuevo string lo cual tambien
seria O(n). Entonces nos damos cuenta que realmente lo unico que queremos saber para cada query es en que estado esta mi string, si
esta volteado o no. Podemos usar un deque para eso. Al comienzo metemos todos los caracteres a la estrucutra de datos.
Luego un booleano que nos diga si es que el string esta volteado o no. Asi al querer agregar un caracter, si mi string esta volteado solo signidica que mis extremos cambian.
Si tengo en mi deque [a,b,c,d,e] mi inicio seria antes de la a y el final luego de la e, pero si esta volteado a seria el final y e
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


