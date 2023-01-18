#include<bits/stdc++.h>
class Employee{
private:
    int id;
    int salary;
    friend int printSalary(Employee);//declaring the friend function
public:
    void setSalary();
};

void Employee::setSalary() {
    std::cout<<"Enter salary"<<std::endl;
    int x;
    std::cin>>x;
    salary=x;
}

int printSalary(Employee obj){
    return  obj.salary+10;
}
int main(){
    Employee obj1;
    obj1.setSalary();
    std::cout<<"The modified salary is "<< printSalary(obj1)<< std::endl;
//    foo();
}
//the friend function of a class can access the private stuff of the class
//similary a friend class can access the private stuff of the class it is declared in


class  A{
private:
    int a=2;
    friend class  B;
};

class B{
public :
    static int setMethod(A obj){
    return (obj.a)*2;
}
};

int main(){
    A obj1;
    B obj2;
    std::cout<<obj2.setMethod(obj1)<< std::endl;

}//here the value of Class A  is accessed by the friend class B