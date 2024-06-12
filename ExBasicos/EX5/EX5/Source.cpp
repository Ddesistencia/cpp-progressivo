/*

Crie um programa que receba a temperatura em graus Celsius e
converta para Farenheit.

*/
#include <iostream>

using namespace std;


int main()
{
	double temperatura{ 0 };

	cout << "Informe a temperatura em celsius: ";
	cin >> temperatura;

	double fahrenheit{ (temperatura * 9 / 5) + 32 };

	cout << "\n" << temperatura << "Graus Celsius para Fahrenheit: " << fahrenheit << "\n";


	return 0;
}