/*

Fa�a um programa em C++ que exibe o valor de duas vari�veis, do tipo
booleano, declarando apenas uma vari�vel.

*/
#include <iostream>
#include <locale.h>
using namespace std;


int main()
{
	int var1, var2;
	var1 = 1;
	var2 = 3;
	cout << "4 / 2 = " << 4 / 2 << endl;
	cout << "1 / 3 = " << var1 / var2;
	return 0;
}

/*
int main()
{
	setlocale(LC_ALL, "portuguese");
	bool verdadeiro, falso;
	verdadeiro = true;
	falso = false;

	cout << "Verdadeiro em C++ �: " << verdadeiro << endl;
	cout << "Falso em C++ �: " << falso << endl;
	cout << "Vari�vel 'bool' ocupa : " << sizeof(bool) << " byte(s)" << endl;
	system("PAUSE");
	return 0;
}
*/