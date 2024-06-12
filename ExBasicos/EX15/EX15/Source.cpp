/*

Crie um programa que peça duas notas ao usuário, e retorne a média
dele.

*/
#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	float nota1{ 0 }, nota2{ 0 }, media{ 0 };
	cout << "Informe duas notas: ";
	cin >> nota1 >> nota2;
	media = (nota1 + nota2) / 2;
	cout << fixed << setprecision(2);

	cout << "\nMedia = " << media << endl;

	return 0;
}