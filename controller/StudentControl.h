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
	
	void removeStudentById(int id) {
		student = arrStudentServiceImpl.RemoveStudent(id);
		if (student.get_id() != -1) {
			std::cout << "Student with ID [" << id << "] has been removed successfully.\n";
		}
		else {
			std::cout << "Student with ID [" << id << "] not found. Cannot remove.\n";
		}
	}

	void showAllStudents() {
		arrStudentServiceImpl.printAllStudents();
	}

	void UpdataStudent(Student student) {
		arrStudentServiceImpl.EditStudent(student);
	}
};

