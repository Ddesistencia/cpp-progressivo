/*

Crie um programa que receba a temperatura em graus Celsius e
converta para Farenheit.

Fa�a o contr�rio do exerc�cio anterior

*/

#include <iostream>

using namespace std;


int main()
{
	double temperatura{ 0 };

	cout << "Informe a temperatura em Fahrenheit: ";
	cin >> temperatura;

	double celsius{ (temperatura - 32) * 5/9};

	cout << "\n" << temperatura << "Fahrenheit para Graus Celsius: " << celsius << "\n";


	return 0;
}