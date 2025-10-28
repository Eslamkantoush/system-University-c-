#pragma once
#include "../model/Student.h"
#include "StaticData.h"
//interface class
class StudentRepository
{
public:
	virtual int AddStudent(Student arrstudent) = 0;
	virtual Student getStudentId(int id) = 0;
	virtual Student RemoveStudent(int id) = 0;
	virtual void printAllStudents() = 0;
	virtual int EditStudent(Student arrstudent) = 0;
};


//class imp
class StudentRepositoryImp : public StudentRepository{
	Student student;
	Student Invalidstudent;
	int index = -1;
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

	void printAllStudents() override {
		if (StaticData::indexstudent == 0) {
			std::cout << "No students found.\n";
			return;
		}

		std::cout << "\n\t\tAll Students:\n";
		std::cout << "\t\tID\tName\tAge\tGPA\tPhone\n";

		for (int i = 0; i < StaticData::indexstudent; i++) {
			Student s = StaticData::arrstudent[i];
			std::cout << "\t\t" << s.get_id() << "\t" << s.get_name() << "\t"
				<< s.get_age() << "\t" << s.get_Gpa() << "\t" << s.get_Phon_num() << "\n";
		}
	}

	Student RemoveStudent(int id) {
		for (int i = 0; i < StaticData::indexstudent; i++) {
			if (StaticData::arrstudent[i].get_id() == id) {
				Student removedStudent = StaticData::arrstudent[i];

				// Shift remaining students to the left
				for (int j = i; j < StaticData::indexstudent - 1; j++) {
					StaticData::arrstudent[j] = StaticData::arrstudent[j + 1];
				}

				StaticData::indexstudent--; // Decrease count
				return removedStudent;
			}
		}
		Invalidstudent.set_id(-1);
		return Invalidstudent;
	}

	int EditStudent(Student arrstudent) {
		for (int i = 0; i < StaticData::indexstudent; i++) {
			if (StaticData::arrstudent[i].get_id() == arrstudent.get_id())
			{
				index = i;
				break;
			}
		}
		if (index == -1) {
			return -1;
		}
		else
		{
			StaticData::arrstudent[index] = arrstudent;
			return index;
		}
	}
};
