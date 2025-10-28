#pragma once
#include "../model/Student.h"
#include "StaticData.h"
//interface class
class StudentRepository
{
public:
	virtual int AddStudent(Student arrstudent) = 0;
	virtual Student getStudentId(int id) = 0;
};


//class imp
class StudentRepositoryImp : public StudentRepository{
	Student student;
	Student Invalidstudent;
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

	Student getStudentId(int id) {
		for (int i = 0; i < StaticData::indexstudent; i++) {
			if (StaticData::arrstudent[i].get_id() == id)
				return StaticData::arrstudent[i];
		}
		Invalidstudent.set_id(-1);
		return Invalidstudent;
	}
};
