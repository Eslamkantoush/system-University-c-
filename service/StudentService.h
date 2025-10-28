#pragma once
#include "../Repository/StudentRepository.h"
#include "../Validation/StudentValidation.h"
#include "../Validation/ValidationServies.h"
// interface StudentService

class StudentService {
public:
	virtual int addStudent(Student arrstudent) = 0;
	virtual Student getStudentId(int id) = 0;
	virtual Student RemoveStudent(int id) = 0;
	virtual void printAllStudents() = 0;
	virtual void EditStudent(Student arrstudent) = 0;

};

// Class StudentServiceImpl
class StudentServiceImpl : public StudentService {
private:
	StudentRepositoryImp arrStudentRepositoryImp;
	StudentValidation studentValidation;
	ValidationServies validationServies;
	Student studentResult;
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

	Student getStudentId(int id) {
		studentResult = arrStudentRepositoryImp.getStudentId(id);
		if (studentResult.get_id() == -1)
			validationServies.notExist("Student", id);
		return studentResult;
	}

	Student RemoveStudent(int id) {
		studentResult = arrStudentRepositoryImp.RemoveStudent(id);
		if (studentResult.get_id() == -1)
			validationServies.notExist("Student", id);
		return studentResult;
	}

	void printAllStudents() override {
		arrStudentRepositoryImp.printAllStudents();
	}

	void EditStudent(Student arrstudent) {
		int id = arrStudentRepositoryImp.EditStudent(arrstudent);
		if (id == -1) {
			validationServies.notExist("Student",arrstudent.get_id());
		}
		else {
			std::cout << "Success Edit Student with ID [" << arrstudent.get_id() << "]\n";
		}
	}
};
