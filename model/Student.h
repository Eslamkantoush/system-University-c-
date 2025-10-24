#pragma once
#include<string>
class Student
{
private: 
	int id;
	std::string age;
	std::string name;
	float Gpa;
	std::string Phon_num;
public:
	// setter //
	void set_id(int id) {
		this->id = id;
	}

	void set_age(std::string age) {
		this->age = age;
	}

	void set_name(std::string name) {
		this->name = name;
	}

	void set_Gpa(float Gpa) {
		this->Gpa = Gpa;
	}

	void set_Phon_num(std::string Phon_num) {
		this->Phon_num = Phon_num;
	}

	//getter//

	int get_id() {
		return id;
	}

	std::string get_age() {
		return age;
	}

	std::string get_name() {
		return name;
	}

	float get_Gpa() {
		return Gpa;
	}

	std::string get_Phon_num() {
		return Phon_num;
	}
};

