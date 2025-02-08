/******************************************************************************
 Implemente uma funC'C#o genC)rica capaz de realizar os cC!lculos de soma, subtraC'C#o,
 divisC#o e multiplicaC'C#o para valores numC)ricos.

*******************************************************************************/

#include <iostream>
#include "calculo_generico.hpp"

using namespace std;

int main()
{
	cout << "Soma: " << soma(125, 10) << endl;
	cout << "Subtração: " << subtracao(55, 7) << endl;
	cout << "Divisão: " << divisao(5675, 4) << endl;
	cout << "Multiplicação: " << multiplicacao(58, 45) << endl;

	return 0;
}