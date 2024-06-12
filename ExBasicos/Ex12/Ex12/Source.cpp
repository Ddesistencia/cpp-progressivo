/*

Crie um software que recebe o valor do seu salário e calcula os 7% do
imposto de renda.
A saída do seu programa deve ser o salário bruto (sem abatimento), o tanto
de imposto que vai pagar e o seu salário líquido (após descontar o IR).

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

	cout << "Informe seu salário: ";
	cin >> salario;
	liquido = salario - (salario * (imposto / 100));
	cout << "Você tera de pagar " << imposto << "% de imposto sobre seu salário o que é R$" << salario * imposto / 100 << "\nLogo você vai receber R$" << liquido << " de salário líquido " << "\n";


	/*
	
	Enxutando o codas:

	float salary;
	cout << "Qual seu salário: ";
	cin >> salary;

	cout << "Salário bruto: $ " << salary << endl;
	cout << "7% de imposto: $ " << 0.07*salary << endl;
	cout << "Salário líquido: $ " << 0.93*salary << endl;

	return 0;

	Se o imposto é de 7% então o seu salário liquido nada mais é do que 93%

	*/

	return 0;
}