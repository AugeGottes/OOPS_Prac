#include<bits/stdc++.h>

class Employee{
    int id;
public:
    void init(int x);
    Employee();
    Employee(Employee & obj);
    void display();
};

void Employee::init(int x) {
    int id=x;
}
Employee::Employee() {

}
Employee::Employee(Employee &obj) {
    id=obj.id+20;
}//the copy constructor adds 20 to the values of new object which is copying from old object

void Employee::display() {
    std::cout<<"Id is "<<id<<std::endl;
}

int main(){
    Employee obj1;
    obj1.init(10);
    obj1.display();
    Employee obj2(obj1);
    obj2.display();

}