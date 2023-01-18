#include<bits/stdc++.h>

class Employee {
    int id;
    int salary;
public:
    void setID() {
        std::cout << "Enter the id of the person" << std::endl;
        std::cin >> id;
    }

    void getID() {
        std::cout << "The idea of the employee is " << id << std::endl;
    }
};

class Complex {
    int a;
    int b;
public:
    void setData(int x, int y) {
        a = x;
        b = y;
    }

    void sum(Complex o1, Complex o2) {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void print() {
        std::cout << "Your number is " << a << "i" << b << std::endl;
    }
};

int main() {
//    Employee fb[4];
//    for (int i = 0; i < 4; i++) {
//        fb[i].setID();
//        fb[i].getID();
//    }
    Complex obj1, obj2, obj3;
    obj1.setData(2, 5);
    obj1.print();
    obj2.setData(3, 8);
    obj2.print();
    obj3.sum(obj1, obj2);
    obj3.print();
}