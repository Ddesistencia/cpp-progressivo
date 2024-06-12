/*

A prova do vestibular do IME tem peso 3 para Matemática, 2.5 para
Física, 2.5 para Química, 1.0 para Português e também 1.0 para Inglês. Crie
um sistema que peça as notas do usuário e retorne a média dele.


*/

#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	float matematica{ 3.0 }, fisica{ 2.5 }, quimica{ 2.5 }, ptbr{ 1 }, eng{ 1 }, total{ 0 };
	cout << fixed << setprecision(2);

	// Coleta de Dados

	cout << "Me informa a nota de Matemática: ";
	cin >> matematica;
	cout << "Me informa a nota de Física: ";
	cin >> fisica;
	cout << "Me informa a nota de Química: ";
	cin >> quimica;
	cout << "Me informa a nota de Português: ";
	cin >> ptbr;
	cout << "Me informa a nota de Inglês: ";
	cin >> eng;

	// Modificação das notas e soma

	matematica *= 0.3;
	fisica *= 0.25;
	quimica *= 0.25;
	ptbr *= 0.1;
	eng *= 0.1;

	total = matematica + fisica + quimica + ptbr + eng;

	// Saída com a media total e como ficaram os valores de cada nota

	cout << "\nSua nota em matemática foi: " << matematica << "\nSua nota em Física foi: " << fisica << "\nSua nota em Química foi: " << quimica \
		 << "\nSua nota em Português foi: " << ptbr << "\nSua nota em Inglês foi: " << eng << "\nPor fim sua media é: " << total << "\n";
	
	system("PAUSE");
	return 0;
}