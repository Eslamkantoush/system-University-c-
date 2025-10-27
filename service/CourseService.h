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
		int addCourse(course course) {
			if (course.get_name().size() == 0) {
				std::cout << "Wrong name You did not enter a name\n";
			}//2 3 4 5
			else if (course.get_hour() <=2 || course.get_hour() >= 8 ) {
				std::cout << "Wrong hour hour RAnge from 2 to 8 \n";
			}
			else {
				return arrCourseRepository.Addcourse(course);
			}
			return - 1;
		}
};

