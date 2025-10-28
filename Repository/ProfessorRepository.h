#pragma once
#include "../model/professor.h"
#include "StaticData.h"

//interface class
class ProfessorRepository
{
public:
	virtual int Addprofessor(Professor arrprofessor) = 0;
	virtual Professor getProfessorId(int id) = 0;
	virtual Professor RemoveProfessor(int id) = 0;
	virtual void printAllProfessors() = 0;
	virtual int EditProfessor(Professor arrprofessor) = 0;
};

//class imp
class ProfessorRepositoryImp : public ProfessorRepository {
private:
	Professor InvalidProfessor;
	int index = -1;
public:
	int Addprofessor(Professor arrprofessor) {
		if (StaticData::indexprofessor == 20) {
			return -1;
		}
		else {
			arrprofessor.set_id(StaticData::idprofessor++);
			StaticData::arrprofessor[StaticData::indexprofessor++] = arrprofessor;
		}
		return arrprofessor.get_id();
	}

	Professor getProfessorId(int id) {
		for (int i = 0; i < StaticData::indexprofessor; i++) {
			if (StaticData::arrprofessor[i].get_id() == id)
				return StaticData::arrprofessor[i];
		}
		InvalidProfessor.set_id(-1);
		return InvalidProfessor;
	}

	void printAllProfessors() {
		if (StaticData::indexprofessor == 0) {
			std::cout << "No professors found.\n";
			return;
		}

		std::cout << "\n\t\tAll Professors:\n";
		std::cout << "\t\tID\tName\tAge\tSalary\tPhone\n";

		for (int i = 0; i < StaticData::indexprofessor; i++) {
			Professor p = StaticData::arrprofessor[i];
			std::cout << "\t\t" << p.get_id() << "\t" << p.get_name() << "\t"
				<< p.get_age() << "\t" << p.get_Salary() << "\t" << p.get_Phon_num() << "\n";
		}
	}

	Professor RemoveProfessor(int id) {
		for (int i = 0; i < StaticData::indexprofessor; i++) {
			if (StaticData::arrprofessor[i].get_id() == id) {
				Professor removedProfessor = StaticData::arrprofessor[i];

				for (int j = i; j < StaticData::indexprofessor - 1; j++) {
					StaticData::arrprofessor[j] = StaticData::arrprofessor[j + 1];
				}

				StaticData::indexprofessor--;
				return removedProfessor;
			}
		}
		InvalidProfessor.set_id(-1);
		return InvalidProfessor;
	}

	int EditProfessor(Professor arrprofessor) {
		for (int i = 0; i < StaticData::indexprofessor; i++) {
			if (StaticData::arrprofessor[i].get_id() == arrprofessor.get_id())
			{
				index = i;
				break;
			}
		}
		if (index == -1) {
			return -1;
		}
		else
		{
			StaticData::arrprofessor[index] = arrprofessor;
			return index;
		}
	}
};