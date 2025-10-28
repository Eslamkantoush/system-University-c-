#pragma once
#include "../model/professor.h"
#include "StaticData.h"

//interface class
class ProfessorRepository
{
public:
	virtual int Addprofessor(Professor arrprofessor) = 0;
	virtual Professor getProfessorId(int id) = 0;
};

//class imp
class ProfessorRepositoryImp : public ProfessorRepository {
private:
	Professor InvalidProfessor;
public:
	int Addprofessor(Professor arrprofessor) {
		if (StaticData::indexprofessor == 20) {
			return -1;
		}
		else {
			arrprofessor.set_id(StaticData::idprofessor++);
			StaticData::arrprofessor[StaticData::indexprofessor++] = arrprofessor;
		}
		return arrprofessor.get_id();
	}
	Professor getProfessorId(int id) {
		for (int i = 0; i < StaticData::indexprofessor; i++) {
			if (StaticData::arrprofessor[i].get_id() == id)
				return StaticData::arrprofessor[i];
		}
		InvalidProfessor.set_id(-1);
		return InvalidProfessor;
	}
};