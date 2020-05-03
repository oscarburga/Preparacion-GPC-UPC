##Primer Contest Semanal

A - In Search of an Easy Problem:

Para este problema nos piden que si al menos hay una persona 
de las N que dice que el problema es dificil debes 
imprimir HARD, de otra manera EASY. Para eso basta leer
las N opiniones (1 o 0) y si alguna es 1 se imprime HARD.
Complejidad O(N).

B - Helping grandpa Laino:

Para este problema tenian que tratar de leer bien el enunciado
ya que nos dicen que hay una vocal que el abuelo no puede 
pronunciar y nos dan las palabras con las que no tiene problema.
Y nos damos cuenta que la unica con la que tiene problema
es la 'i'. Entonces para cada palabra solo tenemos que
decir si contiene 'i' o no. Complejidad O(|S|) para cada 
caso.

C - Pizza, Pizza, Pizza!!!:

Tenemos que cortar la pizza en n + 1 piezas, vemos que
si (n + 1) es par podemos solo hacer (n + 1)/2 cortes
y cumpliria con lo que pide el problema. De otra manera
necesitariamos n + 1 cortes. El caso en el que muchos
estaban teniendo 'Wrong Answer' era en el caso cuando
n = 0, aqui deberiamos hacer 0 cortes pero algunos
respondian que necesitabamos 1 corte lo cual estaba mal.


D - Even Subset Sum Problem:

Sabemos que dos numeros con la misma paridad dan un numero par:
- IMPAR + IMPAR = PAR porque IMPAR%2 = 1 y si sumamos dos
numeros con resto 1 al final tendremos un numero con resto 0
lo cual lo hace par. Por otro lado, cualquier numero par
es un sub conjunto de tamaño 1 ya que cumple que la suma
sea par. Entonces con estos dos puntos sabemos que si tenemos
1 numero par o dos numeros impares habra respuesta.
Para esto podemos buscar un numero par o dos numeros impares 
entre los N mientras leemos el input. Vale recalcar que
la respuesta siempre estara entre a0 y a1 ya que si a0 o a1
es par tenemos respuesta y si a0 y a1 no fueran pares
ambas serian impares y tendriamos respuesta tambien.
Complejidad O(TxN)

E - MaratonIME educates:

Probablemente lo que uno puede pensar es simular el problema
ya que tenemos un cierto numero de personas en cada carro
y queremos que todos tengan cinco personas como maximo. 
Pero podemos pensar en algo mas simple, nosotros tenemos
a0 + a1 + a2 + ... + an personas y queremos que ellas esten
en grupos de maximo tamaño 5. Para esto podemos solo dividir
a las personas entre 5 y en caso haya un residuo con la division
de 5 significa que al menos necesitaremos un auto mas.
Ejemplo Input 1: 
3
3 4 5
Tenemos Suma = 3 + 4 + 5 personas = 12 personas
Carros = 12/5 = 2.4 Carros, pero no podemos tener un 
numero decimal de carros por lo que siempre redondeamos 
arriba. Para esto pueden usar la funcion ceil() en C++
o si queremos trabajar solo con enteros solo tomamos
Suma/5 parte entera y verificamos su Suma%5 != 0, si si lo es
necesitaremos al menos un carro mas.

 
