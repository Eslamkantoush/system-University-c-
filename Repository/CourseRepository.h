#pragma once
#include "../model/course.h"
#include "StaticData.h"

//interface class
class CourseRepository
{
public:
	virtual int Addcourse(course arrcourse) = 0;
};

//class imp
class CourseRepositoryImp : public CourseRepository {
private:
	//StaticData staticdata
public:
	int Addcourse(course arrcourse) {
		if (StaticData::indexcourse == 5) {
			std::cout << "course is Full!\n";
			return 0;
		}
		else {
			arrcourse.set_id(StaticData::idcourse++);
			StaticData::arrcourse[StaticData::indexcourse++] = arrcourse;
			return arrcourse.get_id();
		}
	}
};