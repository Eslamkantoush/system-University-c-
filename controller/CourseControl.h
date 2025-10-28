#pragma once
#include "../service/CourseService.h"

class CourseControl
{
private:
	CourseServiceImp arrCourseServiceImp;
	course Course;
public:
	int addCourse(course arrCourse) {
		return arrCourseServiceImp.addCourse(arrCourse);
	}

	void showCoursebyid(int id) {
		Course = arrCourseServiceImp.getCourseId(id);
		if (Course.get_id() != -1)
		{
			std::cout << "\t\tid \t\tname \t\thour\n";
			std::cout << "\t\t" << Course.get_id() << "\t\t" << Course.get_name() << "\t\t" << Course.get_hour();
			
		}
	}

	void removeCourseById(int id) {
		Course = arrCourseServiceImp.RemoveCourse(id);
		if (Course.get_id() != -1) {
			std::cout << "Course with ID [" << id << "] has been removed successfully.\n";
		}
		else {
			std::cout << "Course with ID [" << id << "] not found. Cannot remove.\n";
		}
	}

	void showAllCourses() {
		arrCourseServiceImp.printAllCourses();
	}

	void UpdataCourses(course Course) {
		arrCourseServiceImp.EditCourse(Course);
	}
};

