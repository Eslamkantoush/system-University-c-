#include<iostream>
#include<string>
#include"../controller/CourseControl.h"
#include"../controller/StudentControl.h"
#include"../controller/ProfessorControl.h"
using namespace std;

void DisplaySystem() {
    cout << "\n\t\t********Management System********\n\n";
    cout << "Enter your Process you neet do to!\n";
    cout << "1.About Student\t\t" << "2.About Course\n";
    cout << "3.About Professor\t" << "4.Exit\n";
}
void ShowList(string value) {
    cout << "\n\t\t********" << value << " Management System********\n\n";
    cout << "1.Add " << value << "\t\t2.Remove " << value;
    cout << "\n4.Show " << value << "\t\t5.Exit\n";
}
int main() {
    int process, flag = 0;
    while (true) {
        DisplaySystem();
        cin >> process;
        switch (process)
        {
        case 1:
            ShowList("Student");
            int processStudent;
            cin >> processStudent;
            if (processStudent == 1) {
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

                StudentControl StudentControl;
                StudentControl.addStudent(student);

                cout << "name : " << student.get_name() << "\nage " << name << " : " << student.get_age();
                cout << "\nPhon number " << name << " : " << student.get_Phon_num() << "\nGPA " << name << " : " << student.get_Gpa();
            }
            break;
        case 2:
            ShowList("Coures");
            break;
        case 3:
            ShowList("Professor");
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
