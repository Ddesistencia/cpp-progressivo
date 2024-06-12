/*

Devido a inflação, todo ano seu salário deve ser ajustado baseado nela.
Por exemplo, se a inflação foi 2,5% então seu salário deve crescer nesse
mesmo montante, para não perder valor.

Crie um programa em C++ que pergunta o salário da pessoa, a inflação do
último ano e aplique essa inflação. Mostre o salário anterior, o aumento
devido a inflação e o novo salário.
*/
#include <iostream>
#include <iomanip> // utilizado em fixed e setprecision, pare definirmos as casas decimais.
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	cout << fixed << setprecision(2);

	float salario{ 0 }, inflacao{ 0 }, liquido{ 0 };

	cout << "Informe seu salário: ";
	cin >> salario;
	cout << "Informe a inflação do ano passado: ";
	cin >> inflacao;

	cout << "\nSeu salário anterior foi R$ " << salario << "\nPor conta da inflação seu salário tera um aumento de " << \
		salario * (inflacao / 100) << "\nCom isso você vai passar a receber R$" << salario + (salario * (inflacao / 100)) << " neste ano\n";

	
	/*
	
	Solução Simplificada:


	float salary;
	cout << "Qual seu salário: ";
	cin >> salary;
	cout << "Salário anterior: $ " << salary << endl;
	cout << "Aumento de 2.5%: $ " << 0.025 * salary << endl;
	cout << "Novo salário: $ " << 1.025 * salary << endl;
	system("Pause");
	return 0;

	*/

	return 0;
}