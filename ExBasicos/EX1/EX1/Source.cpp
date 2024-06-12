/*

Escreva um programa que pede o raio de um círculo, e em seguida exiba
o perímetro e área do círculo

*/
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");

	double raio{ 0 }, perimetro{ 0 }, area{ 0 };

	cout << "Forneça o raio do círculo: ";
	cin >> raio;

	// Calculos
	perimetro = (2 * 3.14) * raio;
	area = 3.14 * (raio * raio);

	cout << "\nO perímetro deste círculo é: " << perimetro;
	cout << "\nA área deste círculo é:  " << area;

	return 0;
}