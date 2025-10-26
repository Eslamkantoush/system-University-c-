#pragma once
#include "../service/StudentService.h"
class StudentControl
{
private:
	StudentServiceImpl arrStudentServiceImpl;
public:
	int addStudent(Student arrstudent) {
		return arrStudentServiceImpl.addStudent(arrstudent);
	}
};

