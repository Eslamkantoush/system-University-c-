#pragma once
#include<iostream>
class sharData
{
protected:
	int id;
	std::string name;
public:
	// setter //
	void set_id(int id) {
		this->id = id;
	}

	void set_name(std::string name) {
		this->name = name;
	}

	//getter//

	int get_id() const {
		return id;
	}

	std::string get_name() const {
		return name;
	}

};

