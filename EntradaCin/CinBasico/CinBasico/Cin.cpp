#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	float num1, num2, sum;
	cout << "Digite dois n�meros: ";
	cin >> num1 >> num2;
	sum = num1 + num2;

	cout << "A soma de " << num1 << " + " << num2 << " � " << sum;

	char name[50];
	cout << "\nDigite seu nome : ";
	cin >> name;
	cout << "Ol�, " << name << "! Tudo bem?\n";

	bool val;
	cout << "\nDigite algo : ";
	cin >> val;
	cout << "Isso representa o booleano: " << val;

	return 0;
}