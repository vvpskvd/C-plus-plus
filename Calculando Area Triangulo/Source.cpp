#include <iostream>
#include <math.h>

using namespace std;

int main() {
	float base, altura;
	double resultado;
	cout << "inserte dato para base de triangulo = ";
	cin >> base;

	cout << endl;

	cout << "inserte dato para altura de triangulo = ";
	cin >> altura;

	cout << endl;

	resultado = (base * altura) / 2;
	cout << "El area total del triangulo es = " << resultado;

	return 0;
}
