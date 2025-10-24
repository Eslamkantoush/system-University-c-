#include<iostream>
#include"Student.h"
using namespace std;

int main() {
    Student s;
    s.set_age("10");
    cout<< s.get_age();
    
    return 0;
}
