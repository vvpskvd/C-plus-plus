#include <iostream>
#include <string>

using namespace std;

int main() {
	//el AUTO infiere el tipo de variable automaticamente gracias a C++.
	string nombre = "DANIEL";
	int edad = 19;
	auto ejemplo = "esotilin";

	cout << "Mi nombre es = " << nombre << ", y tengo " << edad << " años." << endl;
	cout << "la palabra = " << ejemplo << " es un arreglo de caracteres con auto.";
	
	cout << endl << sizeof(nombre);

	return 0;
}