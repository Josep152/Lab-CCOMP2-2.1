#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	//EJERCICIO 1
	int i1, i2;

	cout << "Primer numero : ";
	cin >> i1;
	cout << "Segundo numero : ";
	cin >> i2;

	cout << "Suma : " << i1 + i2 << endl;
	cout << "Resta : " << i1 - i2 << endl;

	cout << "Multiplicacion : " << i1 * i2 << endl;

	if (i2 != 0)
	{
		cout << "Division : " << float(i1) / float(i2) << endl;
		cout << "Residuo de la divicion : " << i1 % i2 << endl;
	}
	else
	{
		cout << "Nose puede dividir entre 0" << endl;
	}

	if (i1 > i2)
	{
		cout << "El mayor numero es " << i1 << endl;
		cout << "El menor numero es " << i2 << endl;
	}
	else if (i1 == i2)
	{
		cout << "Los numeros son iguales" << endl;
	}
	else {
		cout << "El mayor numero es " << i2 << endl;
		cout << "El menor numero es " << i1 << endl;
	}

	if (i1 % i2 == 0)
	{
		cout << i2 << " es divisor de " << i1 << endl << endl;
	}
	else if (i2 % i1 == 0)
	{
		cout << i1 << " es divisor de " << i2 << endl << endl;
	}
	else
	{
		cout << "No son divisores\n\n";
	}


	//EJERCICIO 2
	char operador;
	int o1, o2;

	cout << "MENU" << endl;
	cout << "Presione (+) si desea hacer una suma" << endl;
	cout << "Presione (-) si desea hacer una resta" << endl;
	cout << "Presione (*) si desea hacer una multiplicacion" << endl;
	cout << "Presione (/) si desea hacer una division" << endl;
	cout << "Presione (%) si desea hayar el residuo de la divion" << endl;
	cout << "Presione (!) si desea hacer la raiz cuadrada del primer numero\n\n";

	cout << "Que operacion desea realizar? : ";
	cin >> operador;

	cout << "Ahora el primer numero : ";
	cin >> o1;
	cout << "Y el segundo numero : ";
	cin >> o2;

	if (operador == '+')
	{
		cout << "La suma es : " << o1 + o2 << endl;
	}
	if (operador == '-')
	{
		cout << "La resta es : " << o1 - o2 << endl;
	}
	if (operador == '*')
	{
		cout << "La multiplicacion es : " << o1 * o2 << endl;
	}
	if (operador == '/')
	{
		cout << "La divison es  : " << float(o1) / float(o2) << endl;
	}
	if (operador == '%')
	{
		cout << "El residuo de la divion es : " << o1 % o2 << endl;
	}
	if (operador == '!')
	{
		cout << "La raiz cuadrada del primer numero es : " << sqrt(float(o1)) << endl;
	}
	return 0;
}