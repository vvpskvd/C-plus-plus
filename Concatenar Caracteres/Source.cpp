#include <iostream>
#include <string>

using namespace std;

int main() {
	string texto, entrada1, entrada2;

	cout << "ingrese una palabra = ";
	cin >> entrada1;

	cout << "ingrese otra palabra = ";
	cin >> entrada2;

	texto = entrada1 + " " + entrada2;
	cout << texto;

	return 0;
}