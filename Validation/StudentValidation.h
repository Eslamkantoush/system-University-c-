#pragma once
#include"../model/Student.h"
class StudentValidation
{
public:
	int Studentvalid(Student student) {
		if (student.get_name().size() == 0) {
			std::cout << "Wrong name You did not enter a name\n";
		}
		else if (student.get_age() >= "30" || student.get_age() < "18") {
			std::cout << "Wrong age age Range 18 and 30\n";
		}
		else if (student.get_Phon_num()[0] != '0' ||
			(
				student.get_Phon_num()[1] + student.get_Phon_num()[2] != ('1' + '0') &&
				student.get_Phon_num()[1] + student.get_Phon_num()[2] != ('1' + '1') &&
				student.get_Phon_num()[1] + student.get_Phon_num()[2] != ('1' + '2') &&
				student.get_Phon_num()[1] + student.get_Phon_num()[2] != ('1' + '5')) ||
			student.get_Phon_num().size() != 11
			)
		{
			std::cout << "Wrong Phon Number enter number Egyption\n";
		}
		else if (student.get_Gpa() > 4 || student.get_Gpa() < 0) {
			std::cout << "Wrong GPA GPA ranges from 0 to 4\n";

		}
		else {
			return 1;
		}
		return -1;
	}
};

