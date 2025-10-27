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
	int addProfessor(Professor Professor) {
		if (Professor.get_name().size() == 0) {
			std::cout << "Wrong name You did not enter a name\n";
		}
		else if (Professor.get_age() >= "70" || Professor.get_age() < "30") {
			std::cout << "Wrong age age Range from 30 to 70\n";
		}
		else if (Professor.get_Phon_num()[0] != '0' ||
			(
				Professor.get_Phon_num()[1] + Professor.get_Phon_num()[2] != ('1' + '0') &&
				Professor.get_Phon_num()[1] + Professor.get_Phon_num()[2] != ('1' + '1') &&
				Professor.get_Phon_num()[1] + Professor.get_Phon_num()[2] != ('1' + '2') &&
				Professor.get_Phon_num()[1] + Professor.get_Phon_num()[2] != ('1' + '5')) ||
			Professor.get_Phon_num().size() != 11
			)
		{
			std::cout << "Wrong Phon Number enter number Egyption\n";
		}
		else if (Professor.get_Salary() > 150000 || Professor.get_Salary() < 10000) {
			std::cout << "Wrong Salary salary Range from 10000 to 150000\n";
		}
		else {
			return arrProfessorRepositoryImp.Addprofessor(Professor);
		}
		return -1;
	}
};
