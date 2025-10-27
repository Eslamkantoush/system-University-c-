#pragma once
#include "../model/professor.h"
#include "StaticData.h"

//interface class
class ProfessorRepository
{
public:
	virtual int Addprofessor(professor arrprofessor) = 0;
};

//class imp
class ProfessorRepositoryImp : public ProfessorRepository {
private:
	//StaticData staticdata;
public:
	int Addprofessor(professor arrprofessor) {
		if (StaticData::indexprofessor == 5) {
			std::cout << "professor is Full!\n";
			return 0;
		}
		else {
			arrprofessor.set_id(StaticData::idprofessor++);
			StaticData::arrprofessor[StaticData::indexprofessor++] = arrprofessor;
			return arrprofessor.get_id();
		}
	}
};