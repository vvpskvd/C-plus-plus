#include <iostream>

using namespace std;

int main() {
	//leer letra por letra
	char letra1, letra2, letra3, letra4;

	cin >> letra1;
	cin >> letra2;
	cin >> letra3;
	cin >> letra4;

	cout << letra1 << endl << letra2 << endl << letra3 << endl << letra4 << endl;

	cout << endl;

	//leer un nombre entre comillas.
	//Para poner comillas en una variable se usa \
	//para poner un salto de espacio en una variable sin usar endl se podria usar \n
	string frase = "hola \"fulano\" \nun gusto conocerte.";
	string precios = "lista de precios \n"
		"\t HARINA 28.000 \n"
		"\t PAN 5.000 \n"
		"\t HUEVO 1.000\\UNIDAD\n";
	cout << frase << endl;
	cout << precios;

	string nombre;
	cout << "Ingrese NOMBRE = ";
	cin >> nombre;

	cout << "Tu nombre \"" << nombre << "\" \n"
		"No me gusta para nada...; ";
	return 0;
}