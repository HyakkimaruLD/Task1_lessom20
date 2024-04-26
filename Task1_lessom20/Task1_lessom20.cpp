// Task1_lessom20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Student.h"
using namespace std;
int main() {
    Student student1("John Doe", 4.5, "123456789", "10 Pushkin St, Apt 5", "Kyiv University", "CS-202");

    student1.display();

    cout << "Full Name: " << student1.getFullName() << endl;
    cout << "Average Grade: " << student1.getAverageGrade() << endl;
    cout << "Contact Number: " << student1.getContactNumber() << endl;
    cout << "Address: " << student1.getAddress() << endl;
    cout << "Educational Institution: " << student1.getEducationalInstitution() << endl;
    cout << "Group Number: " << student1.getGroupNumber() << endl;
    return 0;
}
