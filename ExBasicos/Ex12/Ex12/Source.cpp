/*

Crie um software que recebe o valor do seu sal�rio e calcula os 7% do
imposto de renda.
A sa�da do seu programa deve ser o sal�rio bruto (sem abatimento), o tanto
de imposto que vai pagar e o seu sal�rio l�quido (ap�s descontar o IR).

*/
#include <iostream>
#include <iomanip> // utilizado em fixed e setprecision, pare definirmos as casas decimais.
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	cout << fixed << setprecision(2);

	float salario{ 0 }, imposto{ 7 }, liquido{ 0 };

	cout << "Informe seu sal�rio: ";
	cin >> salario;
	liquido = salario - (salario * (imposto / 100));
	cout << "Voc� tera de pagar " << imposto << "% de imposto sobre seu sal�rio o que � R$" << salario * imposto / 100 << "\nLogo voc� vai receber R$" << liquido << " de sal�rio l�quido " << "\n";


	/*
	
	Enxutando o codas:

	float salary;
	cout << "Qual seu sal�rio: ";
	cin >> salary;

	cout << "Sal�rio bruto: $ " << salary << endl;
	cout << "7% de imposto: $ " << 0.07*salary << endl;
	cout << "Sal�rio l�quido: $ " << 0.93*salary << endl;

	return 0;

	Se o imposto � de 7% ent�o o seu sal�rio liquido nada mais � do que 93%

	*/

	return 0;
}