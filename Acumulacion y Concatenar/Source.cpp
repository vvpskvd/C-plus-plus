#include <iostream>

using namespace std;

int main() {
	int numero = 10;
	int numero2 = 20;
	int numero3 = 50;

	numero = numero + 5;

	//otra forma de decirlo es:

	numero2 += 5;
	numero3 -= 5;
	
	cout << numero << endl; //debe dar 15
	cout << numero2 << endl; //debe dar 25
	cout << numero3 << endl; //debe dar 45

	//otro ejercicio es este:
	int numeroEjercicio = 100;
	int puntosASumar;

	cin >> puntosASumar;
	cout << endl;

	numeroEjercicio += puntosASumar;
	cout << numeroEjercicio;

	return 0;
}