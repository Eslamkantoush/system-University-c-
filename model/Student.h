#pragma once
#include"BaseEntity.h"
#include "professor.h"
class Student : public BaseEntity
{
private: 
	float Gpa;
	professor arr[5];
public:
	// setter //
	void set_Gpa(float Gpa) {
		this->Gpa = Gpa;
	}

	void set_professor(professor arr[5]) {
		for (int i = 0; i < 5; i++)
			this->arr[i] = arr[i];
	}

	//getter//

	float get_Gpa() const {
		return Gpa;
	}

	const professor * get_professor() const {
		return arr;
	}
};

