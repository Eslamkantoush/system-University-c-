#pragma once
#include "../model/course.h"
#include "StaticData.h"

//interface class
class CourseRepository
{
public:
	virtual int Addcourse(course arrcourse) = 0;
	virtual course getCourseId(int id) = 0;
};

//class imp
class CourseRepositoryImp : public CourseRepository {
private:
	course Invalidarrcourse;
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

	course getCourseId(int id) {
		for (int i = 0; i < StaticData::indexcourse; i++) {
			if (StaticData::arrcourse[i].get_id() == id)
				return StaticData::arrcourse[i];
		}
		Invalidarrcourse.set_id(-1);
		return Invalidarrcourse;
	}
};