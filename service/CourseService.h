#pragma once
#include"../Repository/CourseRepository.h"

// interface CourseService
class CourseService
{
public:
		virtual int addCourse(course arrCourse) = 0;
};

// Class CourseServiceImo
class CourseServiceImp :public CourseService {
	private:
		CourseRepositoryImp arrCourseRepository;
	public:
		int addCourse(course arrCourse) {
			return arrCourseRepository.Addcourse(arrCourse);
	}
};

