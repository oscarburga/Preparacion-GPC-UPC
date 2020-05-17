// Problema de clase https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/monk-and-power-of-time/
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; scanf("%d", &n); // cin >> n
	queue<int> milista, deseado;
	for(int i = 0; i<n; i++) {
		int x;
		scanf("%d", &x); // cin >> x
		milista.push(x);
	}
	for(int i = 0; i<n; i++){
		int x;
		scanf("%d", &x);
		deseado.push(x);	
	}
	int operaciones = 0;
	while(deseado.size()){ // false:0 true:1
		int por_hacer = deseado.front();
		int candidato = milista.front();
		milista.pop();
		if (candidato != por_hacer) milista.push(candidato); //mandar el proceso al final
		if (candidato == por_hacer) deseado.pop(); //ejecutar el proceso
		operaciones++;
	}
	cout << operaciones << endl;
	return 0;
}
//orden deseado: 1 3 2
// 3 2 1 - 0
// 2 1 3 - 1
// 1 3 2 - 2
// 3 2 - 3
// 2 - 4
// - 5
