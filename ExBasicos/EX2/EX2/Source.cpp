/*

Fa�a um programa que recebe o raio de uma esfera e calcula seu
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

	volume = (((4 * 3.14) * (raio * raio * raio)) / 3); // N�o tem necessidade desses par�nteses, lembre-se ordem de prec�dencia � sempre pela ESQUERDA que come�a...
	cout << "O volume equivale a: " << volume;

	return 0;
}