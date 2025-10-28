#pragma once
#include"../Repository/CourseRepository.h"
#include"../Validation/CourseValidation.h"
// interface CourseService
class CourseService
{
public:
		virtual int addCourse(course arrCourse) = 0;
		virtual course getCourseId(int id) = 0;
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
					validationServies.FullData("Student");
				}
				else
					return id;
			}
			return - 1;
		}

		course getCourseId(int id) {
			courseResult = arrCourseRepositoryImp.getCourseId(id);
			if (courseResult.get_id() == -1)
				std::cout << "course with id [" << id << "] not Exist\n";
			return courseResult;
		}
};

