#pragma once
#include "../model/Student.h"
#include "../model/professor.h"
#include "../model/course.h"

//static Data
class StaticData
{
public:
    static Student arrstudent[5];
    static int indexstudent;
    static int idstudent;

    static professor arrprofessor[5];
    static int indexprofessor;
    static int idprofessor;

    static course arrcourse[5];
    static int indexcourse;
    static int idcourse;
};

//init data
Student StaticData::arrstudent[5];
int StaticData::indexstudent = 0;
int StaticData::idstudent = 1;

professor StaticData::arrprofessor[5];
int StaticData::indexprofessor = 0;
int StaticData::idprofessor = 1;

course StaticData::arrcourse[5];
int StaticData::indexcourse = 0;
int StaticData::idcourse = 1;
