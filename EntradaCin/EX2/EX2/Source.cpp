/*

2. Escreva um programa que peça um número e exiba o dobro dele.

*/
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	float num1{ 0 }, dobro{ 0 };
	cout << "Digite o primeiro número: ";
	cin >> num1;
	dobro = num1 * 2;
	cout << "O dobro de " << num1 << " é " << dobro;

	return 0;
}