#include "Disciplina.hpp"
#include <iostream>

using namespace std;

class Matriculas : public Disciplina {
private:
	int numAlunos;
public:
	Matriculas (long CD, string No, int nAlunos) : Disciplina(CD, No), numAlunos(nAlunos) { }

	friend ostream &operator << (ostream &S, const Matriculas &M) {
		S << "Disciplina: " << M.Nome_ << " | Código: " << M.Codigo_ << " | Quantidade de alunos: " << M.numAlunos<< endl;
		return S;
	}
};