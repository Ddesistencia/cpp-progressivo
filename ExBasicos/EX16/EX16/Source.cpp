

/*

Crie um programa que peça tres notas ao usuário, e retorne a média
dele.

*/
#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	float nota1{ 0 }, nota2{ 0 }, nota3{ 0 }, media{ 0 };
	cout << "Informe 3 notas: ";
	cin >> nota1 >> nota2 >> nota3;
	media = (nota1 + nota2 + nota3) / 3;
	cout << fixed << setprecision(2);

	cout << "\nMedia = " << media << endl;

	return 0;
}
