/*

2. Escreva um programa que pe�a um n�mero e exiba o dobro dele.

*/
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	float num1{ 0 }, dobro{ 0 };
	cout << "Digite o primeiro n�mero: ";
	cin >> num1;
	dobro = num1 * 2;
	cout << "O dobro de " << num1 << " � " << dobro;

	return 0;
}