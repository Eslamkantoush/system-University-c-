#pragma once
#include<iostream>
class ValidationServies
{
public:
	void FullData(std::string type) {
		std::cout << "Full " << type << "\n";
	}
	void notExist(std::string type, int id) {
		std::cout << type << "With ID [" << id << "] not Exist\n";
	}
};
