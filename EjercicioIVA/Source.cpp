#include <iostream>

using namespace std;

int main() {
	float precioConIva, precioSinIva, calculoIva;
	const float IVA = 0.22;
	
	cout << "Ingrese su producto = ";
	cin >> precioSinIva;
	
	calculoIva = precioSinIva * IVA;

	precioConIva = precioSinIva + calculoIva;

	cout << "Su precio final, incluido IVA es = " << precioConIva;

	return 0;
}