#include<iostream>
#include<string>
#include"../controller/CourseControl.h"
#include"../controller/StudentControl.h"
#include"../controller/ProfessorControl.h"
using namespace std;
int process;

void DisplaySystem() {
    cout << "\n\t\t********Management System********\n\n";
    cout << "Enter your Process you neet do to!\n";
    cout << "1.About Student\t\t" << "2.About Course\n";
    cout << "3.About Professor\t" << "4.Exit\n";
}

void ShowList(string value) {
    cout << "\n\t\t********" << value << " Management System********\n\n";
    cout << "1.Add " << value << "\t\t2.Remove " << value << "\t\t3.Edit " << value;
    cout << "\n4.Show " << value << "\t\t5.Exit\n";
}

void addstudent(){
    cout << "Enter Student Data\n";
    Student student;

    cout << "Enter name student\n";
    cin.ignore();
    string name; getline(cin, name);
    student.set_name(name);

    cout << "Enter age student\n";
    string age; getline(cin, age);
    student.set_age(age);

    cout << "Enter Phon number student\n";
    string phonnum; getline(cin, phonnum);
    student.set_Phon_num(phonnum);

    cout << "Enter GPA student\n";
    float gpa; cin >> gpa;
    student.set_Gpa(gpa);

    StudentControl studentcontrol;
    cout << "Success Added student with id [ " << studentcontrol.addStudent(student) << " ]" << endl;
}

void addCourse() {
    cout << "Enter Course Data\n";
    course course;
    cout << "Enter name course\n";
    cin.ignore();
    string name; getline(cin, name);
    course.set_name(name);
    cout << "Enter hour course\n";
    float hour;
    cin >> hour;
    course.set_hour(hour);
    CourseControl coursecontrol;
    cout << "Success Added Course with id [ " << coursecontrol.addCourse(course) << " ]" << endl;
}

void addProfessor(){
    cout << "Enter Professor Data\n";
    Professor professor;
    cout << "Enter name Professor\n";
    cin.ignore();
    string name; getline(cin, name);
    professor.set_name(name);

    cout << "Enter age Professor\n";
    string age; getline(cin, age);
    professor.set_age(age);

    cout << "Enter Phon number Professor\n";
    string phonnum; getline(cin, phonnum);
    professor.set_Phon_num(phonnum);

    cout << "Enter Salary Professor\n";
    float salary; cin >> salary;
    professor.set_Salary(salary); 

    ProfessorControl professorcontrol;
    cout << "Success Added Professor with id [ " << professorcontrol.addProfessor(professor) << " ]" << endl;
}

void switchStudent() {
    switch (process) {
    case 1:
        addstudent();
        break;
    case 2:
        cout << "Remove Student" << endl;
        break;
    case 3:
        cout << "Edit Student" << endl;
        break;
    case 4:
        cout << "Show Student" << endl;
        break;
    case 5:
        break;
    default:
        cout << "Invalid Choose" << endl;
    }
}

void switchCourse() {
    switch (process) {
    case 1:
        addCourse();
        break;
    case 2:
        cout << "Remove Course" << endl;
        break;
    case 3:
        cout << "Edit Course" << endl;
        break;
    case 4:
        cout << "Show Course" << endl;
        break;
    case 5:
        break;
    default:
        cout << "Invalid Choose" << endl;
    }
}

void switchProfessor() {
    switch (process) {
    case 1:
        addProfessor();
        break;
    case 2:
        cout << "Remove Professor" << endl;
        break;
    case 3:
        cout << "Edit Professor" << endl;
        break;
    case 4:
        cout << "Show Professor" << endl;
        break;
    case 5:
        break;
    default:
        cout << "Invalid Choose" << endl;
    }
}

int main() {
    int flag = 0;
    while (true) {
        DisplaySystem();
        cin >> process;
        switch (process)
        {
        case 1:
            ShowList("Student");
            cin >> process;
            switchStudent();
            break;
        case 2:
            ShowList("Coures");
            cin >> process;
            switchCourse();
            break;
        case 3:
            ShowList("Professor");
            cin >> process;
            switchProfessor();
            break;
        case 4:
            flag = 1;
            break;
        default:
            cout << "Invalid Choose\n";
            break;
        }
        if( flag)
            break;
    }
    return 0;
}
