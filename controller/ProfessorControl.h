#pragma once
#include "../service/ProfessorService.h"

class ProfessorControl
{
private:
	ProfessorServiceImp arrProfessorServiceImp;
	Professor professor;
public:
	int addProfessor(Professor arrProfessor) {
		return arrProfessorServiceImp.addProfessor(arrProfessor);
	}

	void showProfessorid(int id) {
		professor = arrProfessorServiceImp.getProfessorId(id);
		if (professor.get_id() != -1)
		{
			std::cout << "\t\tid \t\tname \t\tage \t\tSalary \t\tPhonnumber \n";
			std::cout << "\t\t" << professor.get_id() << "\t\t" << professor.get_name() << "\t\t" << professor.get_age();
			std::cout << "\t\t" << professor.get_Salary() << "\t\t" << professor.get_Phon_num();
		}
	}

	void removeProfessorById(int id) {
		professor = arrProfessorServiceImp.RemoveProfessor(id);
		if (professor.get_id() != -1) {
			std::cout << "Professor with ID [" << id << "] has been removed successfully.\n";
		}
		else {
			std::cout << "Professor with ID [" << id << "] not found. Cannot remove.\n";
		}
	}

	void showAllProfessors() {
		arrProfessorServiceImp.printAllProfessors();
	}

	void Updataprofessor(Professor professor) {
		arrProfessorServiceImp.EditProfessor(professor);
	}
};

