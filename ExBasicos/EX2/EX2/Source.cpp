/*

Faça um programa que recebe o raio de uma esfera e calcula seu
volume.

*/

#include <iostream>
#include <locale.h>

using namespace std;


int main()
{
	setlocale(LC_ALL, "portuguese");
	double raio{ 0 }, volume{ 0 };
	cout << "Calculo de volume de uma esfera...";
	cout << "\nRaio: ";
	cin >> raio;

	volume = (((4 * 3.14) * (raio * raio * raio)) / 3); // Não tem necessidade desses parênteses, lembre-se ordem de precêdencia é sempre pela ESQUERDA que começa...
	cout << "O volume equivale a: " << volume;

	return 0;
}