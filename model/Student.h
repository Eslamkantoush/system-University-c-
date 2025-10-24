#pragma once
#include"BaseEntity.h"
class Student : public BaseEntity
{
private: 
	float Gpa;
public:
	// setter //
	void set_Gpa(float Gpa) {
		this->Gpa = Gpa;
	}

	//getter//

	float get_Gpa() {
		return Gpa;
	}
};

