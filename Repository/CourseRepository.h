#pragma once
#include "../model/course.h"
#include "StaticData.h"

//interface class
class CourseRepository
{
public:
	virtual int Addcourse(course arrcourse) = 0;
	virtual course getCourseId(int id) = 0;
	virtual course RemoveCourse(int id) = 0;
	virtual void printAllCourses() = 0;
	virtual int EditCourse(course arrcourse) = 0;
};

//class imp
class CourseRepositoryImp : public CourseRepository {
private:
	course Invalidarrcourse;
	int index = -1;
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

	course RemoveCourse(int id) {
		for (int i = 0; i < StaticData::indexcourse; i++) {
			if (StaticData::arrcourse[i].get_id() == id) {
				course removedCourse = StaticData::arrcourse[i];

				for (int j = i; j < StaticData::indexcourse - 1; j++) {
					StaticData::arrcourse[j] = StaticData::arrcourse[j + 1];
				}

				StaticData::indexcourse--;
				return removedCourse;
			}
		}
		Invalidarrcourse.set_id(-1);
		return Invalidarrcourse;
	
	}

	void printAllCourses() {
		if (StaticData::indexcourse == 0) {
			std::cout << "No courses found.\n";
			return;
		}

		std::cout << "\n\t\tAll Courses:\n";
		std::cout << "\t\tID\tName\tHours\n";

		for (int i = 0; i < StaticData::indexcourse; i++) {
			course c = StaticData::arrcourse[i];
			std::cout << "\t\t" << c.get_id() << "\t" << c.get_name() << "\t" << c.get_hour() << "\n";
		}
	}

	int EditCourse(course arrcourse) {
		for (int i = 0; i < StaticData::indexcourse; i++) {
			if (StaticData::arrcourse[i].get_id() == arrcourse.get_id())
			{
				index = i;
				break;
			}
		}
		if (index == -1) {
			return -1;
		}
		else
		{
			StaticData::arrcourse[index] = arrcourse;
			return index;
		}
	}
};