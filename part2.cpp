//nesting of member functions is calling functions from within a function
#include <bits/stdc++.h>

class Binary {
    std::string s;

    void display();

public :
    void read();

    void chk_bin();


};

void Binary::read() {
    std::cout << "Enter a binary number" << std::endl;
//    std::string s;(this leads to redeclaration of s making it a local variable
    std::cin >> s;
}

void Binary::chk_bin() {

    for (char i: s) {
        if (i != '1' && i != '0') {
            std::cout << "Not binary" << std::endl;
            break;
        }
    }
    display();//nesting 
}

void Binary::display() {
    std::cout << "The string entered is" << s << std::endl;
}

int main() {
    Binary object1;
    object1.read();
    object1.chk_bin();
//    object1.display();//this does not work as we have made display private this ensuring only class can access it
    return 0;
}