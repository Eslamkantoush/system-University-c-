#pragma once
#include "../model/Student.h"
#include "StaticData.h"
//interface class
class StudentRepository
{
public:
	virtual int AddStudent(Student arrstudent) = 0;
};


//class imp
class StudentRepositoryImp : public StudentRepository{
private:
	//StaticData staticdata;
public:
	int AddStudent(Student arrstudent) {
		if (StaticData::indexstudent == 5) {
			std::cout << "Student is Full!\n";
			return 0;
		}
		else {
			arrstudent.set_id(StaticData::idstudent++);
			StaticData::arrstudent[StaticData::indexstudent++] = arrstudent;
			return arrstudent.get_id();
		}
	}
};
