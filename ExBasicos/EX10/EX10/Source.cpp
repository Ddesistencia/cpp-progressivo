/*

 Faça um programa que recebe um valor de porcentagem do usuário, e
calcula quanto isso representa de um segundo valor que ele digitou.	

*/
#include <iostream>

using namespace std;

int main()
{
	float porcent{ 0 }, valor{ 0 };

	cout << "Digite um valor: ";
	cin >> valor;

	cout << "Digite a porcentagem: ";
	cin >> porcent;

	cout << porcent << "% de " << valor << ": " << (porcent / 100) * valor << "\n";

	return 0;
}