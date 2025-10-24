#pragma once
#include"sharData.h"
class course :sharData
{
private:
	float hour;
public:
	// setter //
	void set_hour(float hour) {
		this->hour = hour;
	}


	// Getter //
	float get_hour() const {
		return hour;
	}
};

