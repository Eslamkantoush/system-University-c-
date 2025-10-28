#pragma once
#include "../Repository/ProfessorRepository.h"
#include "../Validation/ProfessorValidation.h"
// interface ProfessorService

class ProfessorService
{
public:
	virtual int addProfessor(Professor arrProfessor) = 0;
	virtual Professor getProfessorId(int id) = 0;
};

// Class ProfessorServiceImo
class ProfessorServiceImp :public ProfessorService {
private:
	ProfessorRepositoryImp arrProfessorRepositoryImp;
	ProfessorValidation professorValidation;
	ValidationServies validationServies;
	Professor professorResult;
public:
	int addProfessor(Professor Professor) {
		if (professorValidation.professorvalid(Professor) ==1 ){
			int id = arrProfessorRepositoryImp.Addprofessor(Professor);
			if (id == -1) {
				validationServies.FullData("Student");
			}
			else
				return id;
		}
		return -1;
	}

	Professor getProfessorId(int id) { 
		professorResult = arrProfessorRepositoryImp.getProfessorId(id);
		if (professorResult.get_id() == -1)
			std::cout << "Professor with id [" << id << "] not Exist\n";
		return professorResult;
	}
};
