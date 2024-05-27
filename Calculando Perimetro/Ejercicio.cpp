#include <iostream>
#include <string>

using namespace std;

int main() {
	int largo, ancho, perimetro, area;

	cout << "Ejercicio para calcular perimetro en C++" << endl;
	cout << "Ingrese largo para calcular el perimetro = ";
	cin >> largo;

	cout << endl;

	cout << "Ingrese ancho para calcular el perimetro = ";
	cin >> ancho;

	perimetro = (largo*2) + (ancho*2);
	area = largo * ancho;

	cout << endl;

	cout << "Su perimetro total es = " << perimetro << endl;
	cout << "Su area total es = " << area;
	return 0;
}