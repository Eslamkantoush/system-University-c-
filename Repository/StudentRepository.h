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
		if (StaticData::indexstudent == 100) {
			return -1;
		}
		else {
			arrstudent.set_id(StaticData::idstudent++);
			StaticData::arrstudent[StaticData::indexstudent++] = arrstudent;
		}
		return arrstudent.get_id();
	}
};
