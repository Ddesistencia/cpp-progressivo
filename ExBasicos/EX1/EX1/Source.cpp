/*

Escreva um programa que pede o raio de um c�rculo, e em seguida exiba
o per�metro e �rea do c�rculo

*/
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");

	double raio{ 0 }, perimetro{ 0 }, area{ 0 };

	cout << "Forne�a o raio do c�rculo: ";
	cin >> raio;

	// Calculos
	perimetro = (2 * 3.14) * raio;
	area = 3.14 * (raio * raio);

	cout << "\nO per�metro deste c�rculo �: " << perimetro;
	cout << "\nA �rea deste c�rculo �:  " << area;

	return 0;
}