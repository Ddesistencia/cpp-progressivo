/*

1. Rode o c�digo abaixo.
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
	cout << "A soma �: " << sum;
	return 0;
}

// O problema desse c�digo � que a vari�vel n�o � inicializada, logo, n�o tem como fazer o "sum" com o lixo de mem�ria fora que o correto � deixar o sum l� embaixo, para fazer o funcionamento correto