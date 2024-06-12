/*

Programe um software que recebe dois n�meros, onde o primeiro deve
ser menor que o segundo.
Em seguida, ele calcula a porcentagem que o primeiro representa do
segundo.
Por exemplo, se digitou 12 e 21, isso quer dizer que 12 representa 57,14%
de 21

*/
#include <iostream>
#include <iomanip> // utilizado em fixed e setprecision, pare definirmos as casas decimais.

using namespace std;

int main()
{
	float valor1{ 0 }, valor2{ 0 };

	cout << "Digite o primeiro valor: ";
	cin >> valor1;

	cout << "Digite o segundo valor: ";
	cin >> valor2;

	cout << fixed << setprecision(2); // Define a precis�o, ou seja, quantos n�meros depois da virgula ir�o aparecer...
	// setprecision � a fun��o que permite alterarmos os digitos ap�s a virgula, e o fixed � pra garantirmos que o n�mero ser� exibido dessa forma, em suma, ele � um manipulador de formata��o

	if (valor1 > valor2)
	{
		cout << valor2 << " representa " << valor2 * 100 / valor1 << "% de " << valor1;
	}
	else
	{
		cout << valor1 << " representa " << valor1 * 100 / valor2 << "% de " << valor2;
	}


	/*
	
	Solu��o APROPRIADA


	float first, second;
	cout << "Primeiro numero: ";
	cin >> first;
	cout << "Segundo numero: ";
	cin >> second;
	cout << first <<"% de "
	<< second << " = "<< (first/second)*100.0;
	return 0;

	bem mais simples por�m com menos funcionalidade j� que o primeiro sempre tem que ser maior que o segundo
	
	*/

	return 0;
}