#pragma once
#include"BaseEntity.h"
#include "professor.h"
class Student : public BaseEntity
{
private: 
	float Gpa;
	professor prof_arr[5];
public:
	// setter //
	void set_Gpa(float Gpa) {
		this->Gpa = Gpa;
	}

	void set_professor(professor prof_arr[5]) {
		for (int i = 0; i < 5; i++)
			this->prof_arr[i] = prof_arr[i];
	}

	//getter//

	float get_Gpa() const {
		return Gpa;
	}

	const professor * get_professor() const {
		return prof_arr;
	}
};

