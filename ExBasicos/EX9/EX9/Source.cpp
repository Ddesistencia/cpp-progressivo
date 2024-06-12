/*

Faça um programa que recebe um valor do usuário e calcula 12% desse
total

*/
#include <iostream>

using namespace std;

int main()
{
	float porcent{ 12 }, valor{ 0 };

	cout << "Digite um valor: ";
	cin >> valor;

	cout << "12% de " << valor << ": " << (porcent / 100) * valor << "\n";

	return 0;
}
