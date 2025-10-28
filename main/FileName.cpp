#include<iostream>
#include<string>
#include"../controller/CourseControl.h"
#include"../controller/StudentControl.h"
#include"../controller/ProfessorControl.h"
using namespace std;
int process;
int id;
void DisplaySystem() {
    cout << "\n\t\t********Management System********\n\n";
    cout << "Enter your Process you neet do to!\n";
    cout << "1.About Student\t\t" << "2.About Course\n";
    cout << "3.About Professor\t" << "4.Exit\n";
}

void ShowList(string value) {
    cout << "\n\t\t********" << value << " Management System********\n\n";
    cout << "1.Add " << value << "\t\t2.Remove " << value;
    cout << "\n3.Edit " << value << "\t\t4.Show " << value;
    cout << "\n5.Show " << value << " ByID" << "\t6.Exit\n";
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
    id = studentcontrol.addStudent(student);
    if(id != -1)
    {
        cout << "Success Added student with id [ " << id << " ]" << endl;
    }
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
    id = coursecontrol.addCourse(course);
    if (id != -1)
    {
        cout << "Success Added Course with id [ " << id << " ]" << endl;
    }
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
    id = professorcontrol.addProfessor(professor);
    if (id != -1)
    {
        cout << "Success Added Professor with id [ " << id << " ]" << endl;
    }
}



void ShowStudentByID() {
    cout << "Enter ID Student\n";
    cin >> id;
    StudentControl studentControl;
    studentControl.showstudentbyid(id);
}

void ShowCourseByID() {
    cout << "Enter ID Course\n";
    cin >> id;
    CourseControl courseControl;
    courseControl.showCoursebyid(id);
}

void ShowProfessorByID() {
    cout << "Enter ID Professor\n";
    cin >> id;
    ProfessorControl professorControl;
    professorControl.showProfessorid(id);
}



void RemoveStudentByID() {
    cout << "Enter ID Student to remove\n";
    cin >> id;
    StudentControl studentControl;
    studentControl.removeStudentById(id);
}

void RemoveCourseByID() {
    cout << "Enter ID Course to remove\n";
    cin >> id;
    CourseControl courseControl;
    courseControl.removeCourseById(id);
}

void RemoveProfessorByID() {
    cout << "Enter ID Professor to remove\n";
    cin >> id;
    ProfessorControl professorControl;
    professorControl.removeProfessorById(id);
}



void showAllStudents() {
    StudentServiceImpl service;
    service.printAllStudents();
}

void showAllCourses() {
    CourseServiceImp service;
    service.printAllCourses();
}

void showAllProfessors() {
    ProfessorServiceImp service;
    service.printAllProfessors();
}



void editStudent() {
    cout << "Please Enter Student Data\n" << endl;
    Student student;
    cout << "Enter Student ID\n";
    cin >> id;
    student.set_id(id);
    cout << "Enter Student Name\n";
    cin.ignore();
    string name; getline(cin, name);
    student.set_name(name);

    cout << "Enter age student\n";
    string age; getline(cin, age);
    student.set_age(age);

    cout << "Enter Phon number student\n";
    string phonnum; getline(cin, phonnum);
    student.set_Phon_num(phonnum);

    cout << "Enter Student GPA\n";
    float gpa;cin >> gpa;
    student.set_Gpa(gpa);
    StudentControl studentcontrol;    
    studentcontrol.UpdataStudent(student);
}

void editCourse() {
    cout << "Enter Course Data\n";
    course course;

    cout << "Enter Course ID :";
    cin >> id;
    course.set_id(id);

    cout << "Enter name course\n";
    cin.ignore();
    string name; getline(cin, name);
    course.set_name(name);
    cout << "Enter hour course\n";
    float hour;
    cin >> hour;
    course.set_hour(hour);
    CourseControl coursecontrol;
    coursecontrol.UpdataCourses(course);
}

void editTeacher() {
    cout << "Enter Professor Data\n";
    Professor professor;

    cout << "Enter Professor ID :";
    cin >> id;
    professor.set_id(id);


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
    professorcontrol.Updataprofessor(professor);
}



void switchStudent() {
    switch (process) {
    case 1:
        addstudent();
        break;
    case 2:
        RemoveStudentByID();
        break;
    case 3:
        editStudent();
        break;
    case 4:
        showAllStudents();
        break;
    case 5:
        ShowStudentByID();
        break;
    case 6:
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
        RemoveCourseByID();
        break;
    case 3:
        editCourse();
        break;
    case 4:
        showAllCourses();
        break;
    case 5:
        ShowCourseByID();
        break;
    case 6:
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
        RemoveProfessorByID();
        break;
    case 3:
        editTeacher();
        break;
    case 4:
        showAllProfessors();
        break;
    case 5:
        ShowProfessorByID();
        break;
    case 6:
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
