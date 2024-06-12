/*

Fa�a um programa que receba duas vari�veis: o valor das horas e do
minutos. Em seguida, converta tudo para minutos e tamb�m para segundos.

*/
#include <iostream>

using namespace std;

int main()
{
	int horas, minutos;

	cout << "Informe o valor de \"hora\" e o valor de \"minutos\": ";
	cin >> horas >> minutos;
	cout << "Voce informou " << (horas * 60 + minutos) << " minutos e " << (60 * 60 * horas + minutos * 60) << " segundos " << "\n";
	//																		h    m                     seg
	// Caso voc� fa�a 60 dividido pelo resultado 2x vc vai encontrar as horas que enviou



	// Solu��o:
	/*
	int h, m;
	cout << "Horas: ";
	cin >> h;
	cout << "Minutos: ";
	cin >> m;
	cout << "Minutos :" << 60 * h + m << endl; // Tem que adicionar os minutos na hora se n�o n�o vai ser a hora que vc passou 
	cout << "Segundos :" << 60 * 60 * h + m * 60 << endl; // Tem que adicionar as horas e os minutos nos segundos se n�o vai ser uma simples convers�o do que voc� enviou
	*/

	return 0;
}
