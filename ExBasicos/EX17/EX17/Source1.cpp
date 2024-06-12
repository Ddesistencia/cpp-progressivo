/*

A prova do vestibular do IME tem peso 3 para Matem�tica, 2.5 para
F�sica, 2.5 para Qu�mica, 1.0 para Portugu�s e tamb�m 1.0 para Ingl�s. Crie
um sistema que pe�a as notas do usu�rio e retorne a m�dia dele.


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

	cout << "Me informa a nota de Matem�tica: ";
	cin >> matematica;
	cout << "Me informa a nota de F�sica: ";
	cin >> fisica;
	cout << "Me informa a nota de Qu�mica: ";
	cin >> quimica;
	cout << "Me informa a nota de Portugu�s: ";
	cin >> ptbr;
	cout << "Me informa a nota de Ingl�s: ";
	cin >> eng;

	// Modifica��o das notas e soma

	matematica *= 0.3;
	fisica *= 0.25;
	quimica *= 0.25;
	ptbr *= 0.1;
	eng *= 0.1;

	total = matematica + fisica + quimica + ptbr + eng;

	// Sa�da com a media total e como ficaram os valores de cada nota

	cout << "\nSua nota em matem�tica foi: " << matematica << "\nSua nota em F�sica foi: " << fisica << "\nSua nota em Qu�mica foi: " << quimica \
		 << "\nSua nota em Portugu�s foi: " << ptbr << "\nSua nota em Ingl�s foi: " << eng << "\nPor fim sua media �: " << total << "\n";
	
	system("PAUSE");
	return 0;
}