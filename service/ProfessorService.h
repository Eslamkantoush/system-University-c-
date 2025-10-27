#pragma once
#include "../Repository/ProfessorRepository.h"

// interface ProfessorService

class ProfessorService
{
public:
	virtual int addProfessor(Professor arrProfessor) = 0;
};

// Class ProfessorServiceImo
class ProfessorServiceImp :public ProfessorService {
private:
	ProfessorRepositoryImp arrProfessorRepositoryImp;
public:
	int addProfessor(Professor arrProfessor) {
		return arrProfessorRepositoryImp.Addprofessor(arrProfessor);
	}
};
