#pragma once
#include"../model/professor.h"

class ProfessorValidation
{
public:
	int professorvalid (Professor professor){
		if (professor.get_name().size() == 0) {
			std::cout << "Wrong name You did not enter a name\n";
		}
		else if (professor.get_age() >= "70" || professor.get_age() < "30") {
			std::cout << "Wrong age age Range from 30 to 70\n";
		}
		else if (professor.get_Phon_num()[0] != '0' ||
			(
				professor.get_Phon_num()[1] + professor.get_Phon_num()[2] != ('1' + '0') &&
				professor.get_Phon_num()[1] + professor.get_Phon_num()[2] != ('1' + '1') &&
				professor.get_Phon_num()[1] + professor.get_Phon_num()[2] != ('1' + '2') &&
				professor.get_Phon_num()[1] + professor.get_Phon_num()[2] != ('1' + '5')) ||
			professor.get_Phon_num().size() != 11
			)
		{
			std::cout << "Wrong Phon Number enter number Egyption\n";
		}
		else if (professor.get_Salary() > 150000 || professor.get_Salary() < 10000) {
			std::cout << "Wrong Salary salary Range from 10000 to 150000\n";
		}
		else {
			return 1;
		}
		return -1;
	}
};