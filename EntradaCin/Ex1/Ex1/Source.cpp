/*

1. Rode o código abaixo.
Ele deu funcionou corretamente? Qual o problema dele ?

*/

#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "portuguese");
	float num1{ 0 }, num2{ 0 }, sum;
	cout << "Primeiro numero: ";
	cin >> num1;
	cout << "Segundo numero : ";
	cin >> num2;
	sum = num1 + num2;
	cout << "A soma é: " << sum;
	return 0;
}

// O problema desse código é que a variável não é inicializada, logo, não tem como fazer o "sum" com o lixo de memória fora que o correto é deixar o sum lá embaixo, para fazer o funcionamento correto