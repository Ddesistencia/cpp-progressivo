/*

Fa�a um programa que pergunte o ano atual e sua idade, em seguida
exibe seu ano de nascimento.

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int idade, ano;
	cout << "Qual � sua idade? ";
	cin >> idade;
	cout << "Em que ano estamos? ";
	cin >> ano;

	cout << "O ano em que voc� nasceu � " << ano - idade;

	return 0;
}