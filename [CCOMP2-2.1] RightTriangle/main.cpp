#include <iostream>
#include <math.h>
#define PI 3.14159265
#define GRA 57.2958

using namespace std;

int main() {
	double a, b, hipot;
	double alfa, beta;

	cout << "CALCULADOR DE TRIANGULOS RECTANGULOS\n\n";
	cout << "IMPORTANTE : Se acepta solo 2 valores para poder hallar todos los datos del triangulo. Si no tiene el valor de alguno de los datos que se pide, coloque '-1' o algun numero negativo.\n\n";
	cout << "LADOS : " << endl;
	cout << "Lado 'a' : ";
	cin >> a;
	cout << "Lado 'b' : ";
	cin >> b;
	cout << "Lado 'c' : ";
	cin >> hipot;
	cout << endl;
	cout << "ANGULOS : " << endl;
	cout << "Angulo Alfa : ";
	cin >> alfa;
	cout << "Angulo Beta : ";
	cin >> beta;
	cout << endl << endl;

	int valores{ 5 };
	if (a < 0) {
		valores = valores - 1;
		a = 0;
	}
	if (b < 0) {
		valores = valores - 1;
		b = 0;
	}
	if (hipot < 0) {
		valores = valores - 1;
		hipot = 0;
	}
	if (alfa < 0) {
		valores = valores - 1;
		alfa = 0;
	}
	if (beta < 0) {
		valores = valores - 1;
		beta = 0;
	}

	if (valores == 2) {
		//Angulo
		if (alfa > 0 || beta > 0) {
			if (alfa > 0 && beta > 0) {
				cout << "Solo puede colocar 1 angulo\n";
			}
			if (alfa > 89 || beta > 89) {
				cout << "No creo que ese angulo sea posible en un triangulo rectangulo\n";
			}
		}
		//Lados
		if (a > 0) {
			if (hipot > 0) {
				if (a > hipot) {
					b = sqrt(a * a - hipot * hipot);
					alfa = GRA * (asin(hipot / a));
					beta = 90 - alfa;
				}
				else {
					b = sqrt(hipot * hipot - a * a);
					alfa = GRA * (asin(a / hipot));
					beta = 90 - alfa;
				}
			}
			else if (b > 0) {
				hipot = sqrt(a * a + b * b);
				alfa = GRA * (atan(a / b));
				beta = 90 - alfa;
			}
			else if (alfa > 0) {
				beta = 90 - alfa;
				hipot = a/cos(beta * PI / 180 );
				b = sqrt(hipot* hipot - a*a);
			}
			else {
				alfa = 90 - beta;
				hipot = a / cos(beta * PI / 180);
				b = sqrt(hipot * hipot - a * a);
			}
		}
		else if (b > 0) {
			if (hipot > 0) {
				if (b > hipot) {
					a = sqrt(b * b - hipot * hipot);
					beta = GRA * (asin(hipot / b));
					alfa = 90 - beta;
				}
				else {
					a = sqrt(hipot * hipot - b * b);
					beta = GRA * (asin(b / hipot));
					alfa = 90 - beta;
				}
			}
			else if (alfa > 0) {
				beta = 90 - alfa;
				hipot = b / cos(alfa * PI / 180);
				a = sqrt(hipot*hipot - b*b);
			}
			else {
				alfa = 90 - beta;
				hipot = b / cos(alfa * PI / 180);
				a = sqrt(hipot*hipot - b*b);
			}
		}
		else {
			if (alfa > 0) {
				beta = 90 - alfa;
				a = hipot * sin(alfa * PI / 180);
				b = sqrt(hipot*hipot - a *a);
			}
			else {
				alfa = 90 - beta;
				a = hipot * sin(alfa * PI / 180);
				b = sqrt(hipot * hipot - a * a);
			}
		}
		if (a > 0 && b > 0 && hipot > 0 && alfa > 0 && beta > 0) {
			cout << "RESULTADOS : \n\n";
			cout << "a : " << a << endl;
			cout << "b : " << b << endl;
			cout << "c : " << hipot << endl;
			cout << "Angulo Alfa : " << alfa << endl;
			cout << "Angulo Beta : " << beta << endl;
			cout << "Perimetro : " << a + b + hipot << endl;
			cout << "Area : " << a * b / 2 << endl << endl;

			if (a > 10 || b > 10 || hipot > 10) {
				if (a > hipot) {
					for (int i = 0; i < round(hipot/10) - 1; i++) {
						cout << "@" << endl;
					}
					for (int j = 0; j < round(b/10); j++) {
						cout << "@";
					}
				}
				else if (b > hipot) {
					for (int i = 0; i < round(hipot/10) - 1; i++) {
						cout << "@" << endl;
					}
					for (int j = 0; j < round(b/10); j++) {
						cout << "@";
					}
				}
				else {
					for (int i = 0; i < round(a/10) - 1; i++) {
						cout << "@" << endl;
					}
					for (int j = 0; j < round(b/10); j++) {
						cout << "@";
					}
				}
			}
			else {
				if (a > hipot) {
					for (int i = 0; i < round(hipot) - 1; i++) {
						cout << "@" << endl;
					}
					for (int j = 0; j < round(b); j++) {
						cout << "@";
					}
				}
				else if (b > hipot) {
					for (int i = 0; i < round(hipot) - 1; i++) {
						cout << "@" << endl;
					}
					for (int j = 0; j < round(b); j++) {
						cout << "@";
					}
				}
				else {
					for (int i = 0; i < round(a) - 1; i++) {
						cout << "@" << endl;
					}
					for (int j = 0; j < round(b); j++) {
						cout << "@";
					}
				}
			}
		}
	}
	else if (valores < 2) {
		cout << "Se acepta como minimo 2 valores\n";
	}
	else {
		cout << "Prueva con 2 valores. Provaste con " << valores << " valores.\n";
	}

	return 0;
}