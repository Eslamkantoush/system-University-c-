#pragma once
#include "../model/Student.h"

//interface class
class StudentRepository
{
public:
	virtual int AddStudent(Student arrstudent) = 0;
};


//class imp
class StudentRepositoryImp : public StudentRepository{
private:
	Student arrstudent[50];
	int index = 0; 
public:
	int AddStudent(Student arrstudent) {
		if (index == 50) {
			std::cout << "Student is Full!\n";
			return 0;
		}
		else {
			this->arrstudent[index] = arrstudent;
			index++;
			return 1;
		}
	}
};
