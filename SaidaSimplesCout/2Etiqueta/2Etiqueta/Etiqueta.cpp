/*

Elabore um programa que escreve seu nome completo na
primeira linha, seu endere�o na segunda, e o CEP e telefone na terceira,
usando endl.

*/
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	cout << "Nome Completo: Matheus Hohmann" << endl;
	cout << "Endere�o: Rua Para�so Infernal" << endl;
	cout << "CEP:01010-01" << endl;
	cout << "TELEFONE: 2236-1809" << endl;
	system("PAUSE");
	return 0;
}