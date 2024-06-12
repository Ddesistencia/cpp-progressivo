/*

Faça um programa que recebe um inteiro, representado um valor em
anos. Mostre quantos dias tem esse intervalo de tempo, assumindo que um
ano tenha 365 dias.

É bem confuso essa descrição mas...

É basicamente um programa que vai pedir quantos dias tem no ano em que você der como parâmetro.
*/

#include <iostream>

using namespace std;


int main()
{
	float anos{ 0 }; // Havia colocado como int mas compensa muito mais colocar em float já que da pra saber quanto que 1,5 equivale em dias...

	cout << "Digite um valor em anos: ";
	cin >> anos;

	float dias{ anos * 365 };

	cout << "O intervalo de " << anos << " anos equivale a " << dias << " dias\n";

	return 0;
}