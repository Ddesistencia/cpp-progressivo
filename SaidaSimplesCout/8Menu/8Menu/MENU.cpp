/*

Menu - Elabore um script que mostre o seguinte menu na tela:
Cadastro de Clientes
0 - Fim
1 - Inclui
2 - Altera
3 - Exclui
4 - Consulta
Opção

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	cout << "0 - Fim\n1 - Inclui\n2 - Altera\n3 - Exclui\n4 - Consulta\nOpção: " << endl;
	system("PAUSE");
	return 0;
}