#include <bits/stdc++.h>

class Employee {
    static int count;
    int id;
public:
    void setData() {
        std::cout << "Enter employee id" << std::endl;
        std::cin >> id;
        count++;
    }

    void getData() {
        std::cout << "Employee id is " << id << std::endl;
        std::cout << "This is employee no " << count << std::endl;
    }

    static void getCount() {
        std::cout << "The value of count finally is ->" << count << std::endl;
//        std::cout<<id; throws an error cuz it is accessing id (non static)
    }
};

int Employee::count; //takes memory once and gets updated again  and again
//default value of static value is 0
//static variable is shared by all the objects
//int Employee::count=200;(if we need to change values from 0 to something else)

int main() {
    Employee emp1, emp2;
    emp1.setData();
    emp1.getData();
    emp2.setData();
    emp2.getData();

    Employee::getCount();//calls static function
    return 0;
}

//static variable helps to mantain count(called class variables)
//static function only access static variable