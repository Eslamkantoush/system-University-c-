#pragma once
#include "../service/ProfessorService.h"

class ProfessorControl
{
private:
	ProfessorServiceImp arrProfessorServiceImp;
	
public:
	int addProfessor(professor arrProfessor) {
		return arrProfessorServiceImp.addProfessor(arrProfessor);
	}


};

