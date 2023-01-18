#include <bits/stdc++.h>
class Employee{
    int id;
public:
    Employee(Employee &obj);
    ~Employee();
    void display(Employee &obj);
};

Employee::Employee(Employee &obj) {
    obj.id=10;
}

void Employee::display(Employee &obj) {
    std::cout<<obj.id<< std::endl;
}
Employee::~Employee() {
    std::cout<<"Destroyed"<<std::endl;
}

int main(){
    Employee obj1(obj1);

    obj1.display(obj1);
    return 0;
}
