#include <bits/stdc++.h>
//constructors are used to initialise objects they are called by  default on creating an object
//there are 3 types of constructor
//default no values
//parameterised there are values
//copy constructor
class Employee{
    int id;
    int salary;
public:
    Employee();//declaring the constructor
    void display();
};
Employee::Employee() {
    id=10;
}//the constructor is default constructor
void Employee::display() {
    std::cout<<id<<std::endl;
}


class Student{
    int rno;
public:
    Student(int x);
    void display();
};
Student::Student(int x) {
    rno=x;
}//example of parametrised constructor

void Student::display() {
    std::cout<<rno;
}
int main(){
    Employee obj1;
    obj1.display();
    Student obj2(2);
    obj2.display();
}