#pragma once
#include "../service/StudentService.h"
class StudentControl
{
private:
	StudentServiceImpl arrStudentServiceImpl;
	Student student;
public:
	int addStudent(Student arrstudent) {
		return arrStudentServiceImpl.addStudent(arrstudent);
	}
	void showstudentbyid(int id) {
		student = arrStudentServiceImpl.getStudentId(id);
		if (student.get_id() != -1)
		{
			std::cout << "\t\tid \t\tname \t\tage \t\tGPA \t\tPhonnumber \n";
			std::cout << "\t\t" << student.get_id() << "\t\t" << student.get_name() << "\t\t" << student.get_age()<< "\t\t" << student.get_Gpa() << "\t\t" << student.get_Phon_num();
		}
	}
};

