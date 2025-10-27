#pragma once
#include "../service/ProfessorService.h"

class ProfessorControl
{
private:
	ProfessorServiceImp arrProfessorServiceImp;
	
public:
	int addProfessor(Professor arrProfessor) {
		return arrProfessorServiceImp.addProfessor(arrProfessor);
	}


};

