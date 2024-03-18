#include <iostream>
#include <string.h>
using namespace std;

// OOP object oriented programming

// Access member using object 

class Student // class define / defination
{
public:
    int grid;
    char name[50];
    int age;
    char course[50];
    float percentage;
};

int main ()
{
    Student student1 , student2; // objects

    student1.grid = 123;
    strcpy(student1.name,"Rahul");
    student1.age = 18;
    strcpy(student1.course,"DSA");
    student1.percentage = 70.32;

    student2.grid = 143;
    strcpy(student2.name,"NICK");
    student2.age = 20;
    strcpy(student2.course,"FULL STACK DEVELOPMENT");
    student2.percentage = 80.32;

    cout << "-----------------" << endl;

    cout << "GRID: " << student1.grid << endl;
    cout << "NAME: " << student1.name << endl;
    cout << "AGE: " << student1.age << endl;
    cout << "COURSE: " << student1.course << endl;
    cout << "PERCENTAGE: " << student1.percentage << endl;

    cout << "-----------------" << endl;

    cout << "GRID: " << student2.grid << endl;
    cout << "NAME: " << student2.name << endl;
    cout << "AGE: " << student2.age << endl;
    cout << "COURSE: " << student2.course << endl;
    cout << "PERCENTAGE: " << student2.percentage << endl;
    return 0;
}

