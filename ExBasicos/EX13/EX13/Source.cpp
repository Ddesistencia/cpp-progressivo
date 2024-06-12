/*

Devido a infla��o, todo ano seu sal�rio deve ser ajustado baseado nela.
Por exemplo, se a infla��o foi 2,5% ent�o seu sal�rio deve crescer nesse
mesmo montante, para n�o perder valor.

Crie um programa em C++ que pergunta o sal�rio da pessoa, a infla��o do
�ltimo ano e aplique essa infla��o. Mostre o sal�rio anterior, o aumento
devido a infla��o e o novo sal�rio.
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

	cout << "Informe seu sal�rio: ";
	cin >> salario;
	cout << "Informe a infla��o do ano passado: ";
	cin >> inflacao;

	cout << "\nSeu sal�rio anterior foi R$ " << salario << "\nPor conta da infla��o seu sal�rio tera um aumento de " << \
		salario * (inflacao / 100) << "\nCom isso voc� vai passar a receber R$" << salario + (salario * (inflacao / 100)) << " neste ano\n";

	
	/*
	
	Solu��o Simplificada:


	float salary;
	cout << "Qual seu sal�rio: ";
	cin >> salary;
	cout << "Sal�rio anterior: $ " << salary << endl;
	cout << "Aumento de 2.5%: $ " << 0.025 * salary << endl;
	cout << "Novo sal�rio: $ " << 1.025 * salary << endl;
	system("Pause");
	return 0;

	*/

	return 0;
}