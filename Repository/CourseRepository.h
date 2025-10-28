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
		if (StaticData::indexcourse == 20) {
			return -1;
		}
		else {
			arrcourse.set_id(StaticData::idcourse++);
			StaticData::arrcourse[StaticData::indexcourse++] = arrcourse;
 		}
		return arrcourse.get_id();

	}
};