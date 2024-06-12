/*
Na cidade de C++lândia há uma tolerância de 15% do limite de
velocidade, para não se levar uma multa. Faça um programa que pede ao
usuário a velocidade máxima de uma via e calcula até que velocidade o carro
pode transitar sem ser multado. Seu código vai ser embarcado no sistema de
GPS do carro, para avisar o limite de velocidade que o carro deve percorrer.

Faça um programa que peça a velocidade maxima de uma via, depois, adicione a tolerância de 15% sobre a velocidade maxima dessa via
para não ser multado.

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
	cout << "Qual é a velocidade máxima da via? ";
	cin >> velocidade;

	cout << "A tolerância da via é de " << velocidade * 15 / 100 << "km/h\n";
	cout << "O limite máximo permitido da via com a tolerância de 15% é: " << velocidade + (velocidade * 15 / 100) << "km/h\n";

	return 0;
}