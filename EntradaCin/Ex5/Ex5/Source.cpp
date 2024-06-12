/*

Faça um programa que recebe seu nome completo (incluindo espaços) e
imprima ele na tela. Estude e aprenda como fazer isso usando o link do site
de referência.

*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	string Namae;
	cout << "Digite seu nome completo: ";
	getline (cin, Namae);
	cout << "Bom dia " << Namae << "\n";
	cout << Namae << " qual é o seu hobby favorito? ";
	getline(cin, Namae);
	cout << "Legal, também gosto disso";

	return 0;
}