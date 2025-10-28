#pragma once
#include"../Repository/CourseRepository.h"
#include"../Validation/CourseValidation.h"
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
		CourseValidation courseValidation;
		ValidationServies validationServies;
	public:
		int addCourse(course course) {
			if (courseValidation.Coursevalid(course) == 1){
				int id = arrCourseRepository.Addcourse(course);
				if (id == -1) {
					validationServies.FullData("Student");
				}
				else
					return id;
			}
			return - 1;
		}
};

