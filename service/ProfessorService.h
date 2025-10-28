#pragma once
#include "../Repository/ProfessorRepository.h"
#include "../Validation/ProfessorValidation.h"
// interface ProfessorService

class ProfessorService
{
public:
	virtual int addProfessor(Professor arrProfessor) = 0;
	virtual Professor getProfessorId(int id) = 0;
	virtual Professor RemoveProfessor(int id) = 0;
	virtual void printAllProfessors() = 0;
	virtual void EditProfessor(Professor arrprofessor) = 0;
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
				validationServies.FullData("Professor");
			}
			else
				return id;
		}
		return -1;
	}

	Professor getProfessorId(int id) { 
		professorResult = arrProfessorRepositoryImp.getProfessorId(id);
		if (professorResult.get_id() == -1)
			validationServies.notExist("Professor", id);
		return professorResult;
	}

	Professor RemoveProfessor(int id) {
		professorResult = arrProfessorRepositoryImp.RemoveProfessor(id);
		if (professorResult.get_id() == -1)
			validationServies.notExist("Professor", id);
		return professorResult;
	}

	void printAllProfessors()  {
		arrProfessorRepositoryImp.printAllProfessors();
	}

	void EditProfessor(Professor arrprofessor) {
		int id = arrProfessorRepositoryImp.EditProfessor(arrprofessor);
		if (id == -1) {
			validationServies.notExist("Professor", arrprofessor.get_id());
		}
		else {
			std::cout << "Success Edit Professor with ID [" << arrprofessor.get_id() << "]\n";
		}
	}
};
