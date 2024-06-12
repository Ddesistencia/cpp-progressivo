/*

Crie um programa em C++ que receba os dois lados de um retângulo e
calcule sua área (use apenas um comando cin)

*/
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	float altura{ 0 }, base{ 0 }, area{ 0 };

	cout << "Valor da altura do retângulo: ";
	cin >> altura;
	cout << "Valor da base do retângulo: ";
	cin >> base;
	area = altura * base;
	cout << "A área do retângulo é: " << area << endl;

	return 0;
}
