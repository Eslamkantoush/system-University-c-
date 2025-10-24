#pragma once
#include"BaseEntity.h"
class professor : public BaseEntity
{
private:
	float Salary;
public:
	// setter //
	void set_Salary(float Salary) {
		this->Salary = Salary;
	}

	// Getter //
	float get_Salary() const{
		return Salary;
	}
};

