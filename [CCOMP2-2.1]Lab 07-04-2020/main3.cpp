#include <iostream>
#include <math.h> 
using namespace std;

int main()
{
	double r, L, A, BT, AT;
	cout << "Coloque el radio del circulo : ";
	cin >> r;
	cout << "El area del circulo es : " << 3.14 * (r * r) << endl;

	cout << "Lado del cuadrado : ";
	cin >> L;
	cout << "Ancho del rectangulo : ";
	cin >> A;
	cout << "El area del rectangulo es : " << L * A << endl;

	cout << "La base del triangulo : ";
	cin >> BT;
	cout << "La altura del triangulo : ";
	cin >> AT;
	cout << "El area del triangulo : " << (BT * AT) / 2 << endl;

	return 0;
}