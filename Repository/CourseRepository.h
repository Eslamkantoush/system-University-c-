#pragma once
#include "../model/course.h"

//interface class
class CourseRepository
{
public:
	virtual int Addcourse(course arrcourse) = 0;
};

//class imp
class CourseRepositoryImp : public CourseRepository {
private:
	course arrcourse[50];
	int index = 0;
public:
	int Addcourse(course arrcourse) {
		if (index == 50) {
			std::cout << "course is Full!\n";
			return 0;
		}
		else {
			this->arrcourse[index] = arrcourse;
			index++;
			return 1;
		}
	}
};