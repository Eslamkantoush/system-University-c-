#pragma once
#include"sharData.h"
class course :public sharData
{
protected:
	float hour;
	int studentIds[5];
public:
	// setter //
	void set_hour(float hour) {
		this->hour = hour;
	}

	void set_studentIds(int studentIds[5]) {
		for (int i = 0; i < sizeof(studentIds) / sizeof(studentIds[0]); i++)
			this->studentIds[i] = studentIds[i];
	}

	
	// Getter //
	float get_hour() const {
		return hour;
	}

	const int* get_studentIds() {
		return studentIds;
	}
};

