#include <iostream>

using namespace std;

int main() {
	const float PI = 3.14159;
	float radio = 10;

	double perimetro = (radio * 2) * PI;
	double area = radio * radio * PI;

	cout << perimetro << endl;
	cout << area;

	return 0;
}