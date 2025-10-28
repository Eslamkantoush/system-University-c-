#pragma once
#include "../model/Student.h"
#include "../model/professor.h"
#include "../model/course.h"

//static Data
class StaticData
{
public:
    static Student arrstudent[100];
    static int indexstudent;
    static int idstudent;

    static Professor arrprofessor[20];
    static int indexprofessor;
    static int idprofessor;

    static course arrcourse[20];
    static int indexcourse;
    static int idcourse;
};

//init data
Student StaticData::arrstudent[100];
int StaticData::indexstudent = 0;
int StaticData::idstudent = 1;

Professor StaticData::arrprofessor[20];
int StaticData::indexprofessor = 0;
int StaticData::idprofessor = 1;

course StaticData::arrcourse[20];
int StaticData::indexcourse = 0;
int StaticData::idcourse = 1;
