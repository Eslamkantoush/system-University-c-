#pragma once
#include "../Repository/StudentRepository.h"

// interface StudentService

class StudentService {
public:
	virtual int addStudent(Student arrstudent) = 0;
};

// Class StudentServiceImpl
class StudentServiceImpl : public StudentService {
private:
	StudentRepositoryImp arrStudentRepositoryImp;
public:
	int addStudent(Student arrstudent) {
		return arrStudentRepositoryImp.AddStudent(arrstudent);
	}

};