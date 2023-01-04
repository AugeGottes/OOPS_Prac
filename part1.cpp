#include<bits/stdc++.h>
using namespace std;
class Employee{
private:
    int a,b,c;
public:
    int d,e;
    void setData(int a1, int b1, int c1);  //creating template for a function
    void getData(){
        cout<<a+b+c<<endl;
        cout<<d+e<<endl;
    }//creating the function  here only
};
void Employee::setData(int a1, int b1, int c1) {
    a=a1;
    b=b1;
    c=c1;

}//defintion outside the class

int main(int argc, const char** argv) {
    Employee object1;
    object1.d=3;
    object1.e=6;
    //this 2 are valid
//    object1.a=2; invalid cause a is declared private and can only be accessed by a member of the class

    object1.setData(2,5,7);
    object1.getData();
    return 0;
}

