/*

Faça um programa que receba duas variáveis: o valor das horas e do
minutos. Em seguida, converta tudo para minutos e também para segundos.

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
	// Caso você faça 60 dividido pelo resultado 2x vc vai encontrar as horas que enviou



	// Solução:
	/*
	int h, m;
	cout << "Horas: ";
	cin >> h;
	cout << "Minutos: ";
	cin >> m;
	cout << "Minutos :" << 60 * h + m << endl; // Tem que adicionar os minutos na hora se não não vai ser a hora que vc passou 
	cout << "Segundos :" << 60 * 60 * h + m * 60 << endl; // Tem que adicionar as horas e os minutos nos segundos se não vai ser uma simples conversão do que você enviou
	*/

	return 0;
}
