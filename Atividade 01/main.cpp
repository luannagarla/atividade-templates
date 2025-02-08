#include <iostream>
#include "Matriculas.hpp"
#include "exibe_generico.hpp"

using namespace std;

int main() {
    vector <Matriculas*> Disciplinas;
    Disciplinas.push_back(new Matriculas(155, "POO", 40)); 
    Disciplinas.push_back(new Matriculas(156, "Cálculo", 15)); 
    Disciplinas.push_back(new Matriculas(157, "Estrutura de dados", 23)); 

    Exibe(Disciplinas, "Matrículas por Disciplina:");

    return 0;
}