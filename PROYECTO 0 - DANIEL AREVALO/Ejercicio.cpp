#include <iostream>
#include <string>

using namespace std;

int main() {
	const float IMP = 12.5;
	string nombre;
	int herederos, fortuna, x_fortuna, x_caridad;
	float x_impuesto, cobrar, x_impuesto_caridad, cobrar_caridad;

	//Ingreso de datos.
	cout << "Ingresa tu nombre: ";
	cin >> nombre;

	cout << nombre << ", este es tu testamento. \n"
		"Solo hace falta que indiques la division de tu fortuna. \n \n";

	cout << nombre << ", indica la cantidad de herederos: ";
	cin >> herederos;

	cout << "Ahora indica tu fortuna total : ";
	cin >> fortuna;

	//Calculos.
	x_fortuna = fortuna / herederos;
	x_caridad = fortuna % herederos;

	x_impuesto = x_fortuna * IMP / 100;
	cobrar = x_fortuna - x_impuesto;

	x_impuesto_caridad = x_caridad * IMP / 100;
	cobrar_caridad = x_caridad - x_impuesto_caridad;

	//Final.
	cout << "El total de $" << fortuna << " se distribuira como sigue: \n"
		"\t HEREDEROS= \t" << herederos << //Los herederos
		"\n \t C\\U RECIBE=\t" << x_fortuna << //La fortuna
		"\n \t A CARIDAD= \t" << x_caridad; //Que va a la caridad.

	cout << endl;

	cout << "Se ha de grabar todo con el impuesto a la ganancia del 12.5%: \n"
		"\t POR HERENCIA \t" << x_fortuna << "\t" << "IMPUESTO = " << x_impuesto << "\t" << "A COBRAR: " << cobrar <<
		"\n \t A CARIDAD \t" << x_caridad << "\t" << "IMPUESTO = " << x_impuesto_caridad << "\t" << "A COBRAR: " << cobrar_caridad;

	return 0;
}