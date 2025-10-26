#pragma once
#include "../model/professor.h"

//interface class
class ProfessorRepository
{
public:
	virtual int Addprofessor(professor arrprofessor) = 0;
};

//class imp
class ProfessorRepositoryImp : public ProfessorRepository {
private:
	professor arrprofessor[50];
	int index = 0;
public:
	int Addprofessor(professor arrprofessor) {
		if (index == 50) {
			std::cout << "professor is Full!\n";
			return 0;
		}
		else {
			this->arrprofessor[index] = arrprofessor;
			index++;
			return 1;
		}
	}
};