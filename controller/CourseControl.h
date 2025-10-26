#pragma once
#include "../service/CourseService.h"

class CourseControl
{
private:
	CourseServiceImp arrCourseServiceImp;
public:
	int addCourse(course arrCourse) {
		return arrCourseServiceImp.addCourse(arrCourse);
	}

};

