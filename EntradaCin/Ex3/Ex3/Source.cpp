/*

Faça um programa que recebe o lado de um quadrado e retorna o valor de
sua área.

*/
#include <iostream>
#include <locale.h>

using namespace std;


int main()
{
	setlocale(LC_ALL, "portuguese");
	float lados{ 0 };

	cout << "Lado do Quadrado: ";
	cin >> lados;
	float area{ lados };
	area *= lados;

	cout << "A área do quadrado é " << area << endl;

	return 0;
}

