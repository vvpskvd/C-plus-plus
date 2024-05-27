#include <iostream>
#include <string>
#include <clocale>

using namespace std;

int main() {
	//esto es para ver la ñ.
	setlocale(LC_CTYPE, "Spanish");

	//Textos en C++
	cout << "Este es el texto que quiero que aparezca" << endl;
	cout << "Ahora tengo otro texto!!" << endl;
	cout << "O bueno, quien sabe que estos no sean textos!" << endl;
	cout << "Es mentira, si son textos!!" << endl;

	cout << endl;
	cout << endl;

	//Ingresar un dato en C++
	string name;
	int edad;

	cout << "Ingrese su nombre completo: ";
	cin >> name;

	cout << endl;

	cout << "Ingrese su edad: ";
	cin >> edad;

	cout << endl;

	cout << "Hola " << name << " como estas?. " << "Tu edad es: " << edad <<  " años." << endl;

	cout << endl;

	//Asignar un valor en variables.
	name = "daniel";
	edad = 18;

	cout << "Hola nueva persona, tu nombre es " << name << " Tu edad es: " << edad;



	return 0;
}