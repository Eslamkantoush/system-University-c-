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
    int id = studentcontrol.addStudent(student);

    cout << "Success Added with id [ " << id << " ]" << endl;
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
        cout << "Add Course" << endl;
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
        cout << "Add Professor" << endl;
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
