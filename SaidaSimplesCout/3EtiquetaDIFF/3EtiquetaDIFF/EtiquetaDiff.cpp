/*

Elabore um programa que escreve seu nome completo na
primeira linha, seu endere�o na segunda, e o CEP e telefone na terceira,
usando endl.

Repita o programa anterior, agora usando \n ao inv�s de endl. Voc�
consegue fazer tudo em um comando cout s�? Tente

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	cout << "Nome Completo: Matheus Hohmann\nEndere�o: Rua Para�so Invernal\nCEP: 01010-10\nTelefone: 2236-1809\n";
	system("PAUSE");
	return 0;
}
