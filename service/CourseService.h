#pragma once
#include"../Repository/CourseRepository.h"
#include"../Validation/CourseValidation.h"
// interface CourseService
class CourseService
{
public:
		virtual int addCourse(course arrCourse) = 0;
		virtual course getCourseId(int id) = 0;
		virtual course RemoveCourse(int id) = 0;
		virtual void printAllCourses() = 0;
		virtual void EditCourse(course arrcourse) = 0;
};

// Class CourseServiceImo
class CourseServiceImp :public CourseService {
private:

	CourseRepositoryImp arrCourseRepositoryImp;
	CourseValidation courseValidation;
	ValidationServies validationServies;
	course courseResult;
public:
	int addCourse(course course) {
		if (courseValidation.Coursevalid(course) == 1){
			int id = arrCourseRepositoryImp.Addcourse(course);
			if (id == -1) {
				validationServies.FullData("course");
			}
			else
				return id;
		}
		return - 1;
	}

	course getCourseId(int id) {
		courseResult = arrCourseRepositoryImp.getCourseId(id);
		if (courseResult.get_id() == -1)
			validationServies.notExist("Course", id);
		return courseResult;
	}

	course RemoveCourse(int id) {
		courseResult = arrCourseRepositoryImp.RemoveCourse(id);
		if (courseResult.get_id() == -1)
			validationServies.notExist("Course", id);
		return courseResult;
	}

	void printAllCourses()  {
		arrCourseRepositoryImp.printAllCourses();
	}

	void EditCourse(course arrcourse) {
		int id = arrCourseRepositoryImp.EditCourse(arrcourse);
		if (id == -1) {
			validationServies.notExist("Course",arrcourse.get_id());
		}
		else {
			std::cout << "Success Edit Course with ID [" << arrcourse.get_id() << "]\n";
		}
	}
};

