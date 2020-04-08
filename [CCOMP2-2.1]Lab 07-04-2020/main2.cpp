#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double A, B;
	cout << "Primer numero : ";
	cin >> A;
	cout << "Segundo numero : ";
	cin >> B;

	cout << "Suma : " << A + B << endl;
	cout << "Resta : " << A - B << endl;
	cout << "Multiplicacion : " << A * B << endl;
	cout << "Division : " << A / B << endl;
	cout << "Raiz cuadrada : " << sqrt(A) << endl;
	return 0;
}