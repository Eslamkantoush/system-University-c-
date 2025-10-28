#pragma once
#include"../model/course.h"
#include"ValidationServies.h"

class CourseValidation
{
public:
	int Coursevalid(course course) {
		if (course.get_name().size() == 0) {
			std::cout << "Wrong name You did not enter a name\n";
		}//2 3 4 5
		else if (course.get_hour() <= 2 || course.get_hour() >= 8) {
			std::cout << "Wrong hour hour RAnge from 2 to 8 \n";
		}
		else {
			return 1;
		}
		return -1;
	}
};

