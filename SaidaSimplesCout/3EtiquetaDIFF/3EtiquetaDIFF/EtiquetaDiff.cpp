/*

Elabore um programa que escreve seu nome completo na
primeira linha, seu endereço na segunda, e o CEP e telefone na terceira,
usando endl.

Repita o programa anterior, agora usando \n ao invés de endl. Você
consegue fazer tudo em um comando cout só? Tente

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	cout << "Nome Completo: Matheus Hohmann\nEndereço: Rua Paraíso Invernal\nCEP: 01010-10\nTelefone: 2236-1809\n";
	system("PAUSE");
	return 0;
}
