/*

Crie um programa em C++ que receba os dois lados de um ret�ngulo e
calcule sua �rea (use apenas um comando cin)

*/
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	float altura{ 0 }, base{ 0 }, area{ 0 };

	cout << "Valor da altura do ret�ngulo: ";
	cin >> altura;
	cout << "Valor da base do ret�ngulo: ";
	cin >> base;
	area = altura * base;
	cout << "A �rea do ret�ngulo �: " << area << endl;

	return 0;
}
