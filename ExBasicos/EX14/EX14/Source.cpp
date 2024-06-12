/*
Na cidade de C++l�ndia h� uma toler�ncia de 15% do limite de
velocidade, para n�o se levar uma multa. Fa�a um programa que pede ao
usu�rio a velocidade m�xima de uma via e calcula at� que velocidade o carro
pode transitar sem ser multado. Seu c�digo vai ser embarcado no sistema de
GPS do carro, para avisar o limite de velocidade que o carro deve percorrer.

Fa�a um programa que pe�a a velocidade maxima de uma via, depois, adicione a toler�ncia de 15% sobre a velocidade maxima dessa via
para n�o ser multado.

*/
#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	cout << fixed << setprecision(0);
	float velocidade{ 0 };
	cout << "Qual � a velocidade m�xima da via? ";
	cin >> velocidade;

	cout << "A toler�ncia da via � de " << velocidade * 15 / 100 << "km/h\n";
	cout << "O limite m�ximo permitido da via com a toler�ncia de 15% �: " << velocidade + (velocidade * 15 / 100) << "km/h\n";

	return 0;
}