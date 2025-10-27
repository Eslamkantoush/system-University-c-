#pragma once
#include"BaseEntity.h"
#include"professor.h"
#include"course.h"
class Student : public BaseEntity
{
private: 
	float Gpa;
	Professor prof_arr[5];
	course cour_arr[5];
public:
	// setter //
	void set_Gpa(float Gpa) {
		this->Gpa = Gpa;
	}

	void set_professor(Professor prof_arr[5]) {
		
		for (int i = 0; i < sizeof(prof_arr) / sizeof(prof_arr[0]); i++)
			this->prof_arr[i] = prof_arr[i];
	}


	void set_course(course cour_arr[5]) {
		for (int i = 0; i < sizeof(cour_arr) / sizeof(cour_arr[0]); i++)
			this->cour_arr[i] = cour_arr[i];
	}
	//getter//

	float get_Gpa() const {
		return Gpa;
	}

	const Professor* get_professor() const {
		return prof_arr;
	}

	const course* set_course() const {
		return cour_arr;
	}
};

