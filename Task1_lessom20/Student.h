#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string fullName;
    float averageGrade;
    string contactNumber;
    string address;
    string educationalInstitution;
    string groupNumber;

public:
    Student(string name, float grade, string contact, string addr, string institution, string group) {
        fullName = name;
        averageGrade = grade;
        contactNumber = contact;
        address = addr;
        educationalInstitution = institution;
        groupNumber = group;
    }

    void display() {
        cout << "Full Name: " << fullName << endl;
        cout << "Average Grade: " << averageGrade << endl;
        cout << "Contact Number: " << contactNumber << endl;
        cout << "Address: " << address << endl;
        cout << "Educational Institution: " << educationalInstitution << endl;
        cout << "Group Number: " << groupNumber << endl;
    }

    string getFullName() {
        return fullName;
    }

    float getAverageGrade() {
        return averageGrade;
    }

    string getContactNumber() {
        return contactNumber;
    }

    string getAddress() {
        return address;
    }

    string getEducationalInstitution() {
        return educationalInstitution;
    }

    string getGroupNumber() {
        return groupNumber;
    }
};
