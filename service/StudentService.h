#pragma once
#include "../Repository/StudentRepository.h"
#include "../Validation/StudentValidation.h"
#include "../Validation/ValidationServies.h"
// interface StudentService

class StudentService {
public:
	virtual int addStudent(Student arrstudent) = 0;
};

// Class StudentServiceImpl
class StudentServiceImpl : public StudentService {
private:
	StudentRepositoryImp arrStudentRepositoryImp;
	StudentValidation studentValidation;
	ValidationServies validationServies;
public:
	int addStudent(Student student) {
		if (studentValidation.Studentvalid(student) == 1) {
			int id = arrStudentRepositoryImp.AddStudent(student);;
			if (id == -1) {
				validationServies.FullData("Student");
			}
			else
				return id;

		}
		return -1;
	}
};
