#pragma once
#include"BaseEntity.h"
class professor : public BaseEntity
{
private:
	float Salary;
	int studentIds[5];
public:
	// setter //
	void set_Salary(float Salary) {
		this->Salary = Salary;
	}

	void set_studentIds(int studentIds[5]){
		for (int i = 0; i < 5; i++)
			this->studentIds[i] = studentIds[i];
	}
	// Getter //
	float get_Salary() const{
		return Salary;
	}

	const int * get_studentIds() {
		return studentIds;
	}
};

