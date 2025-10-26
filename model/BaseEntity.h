#pragma once
#include"sharData.h"
class BaseEntity : public sharData
{
protected:
	std::string age;
	std::string Phon_num;
public:
	// setter //
	void set_age(std::string age) {
		this->age = age;
	}


	void set_Phon_num(std::string Phon_num) {
		this->Phon_num = Phon_num;
	}

	//getter//

	std::string get_age() const {
		return age;
	}

	std::string get_Phon_num() const {
		return Phon_num;
	}
};

