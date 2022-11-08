//7. Demonstrate Single Inheritance.
#include <iostream>
using namespace std;
class Base{
    char name[10];
    int reg_no;
public:
    float m1,m2,m3;
    void read(){
        cout<<"Enter Student Details"<<endl;
        cout<<"Name : ";
        cin>>name;
        cout<<"Reg_No : ";
        cin>>reg_no;
    }
    void display(){
        cout<<"---* Student Details *---"<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Reg_no : "<<reg_no<<endl;
        cout<<"Three subject marks"<<endl;
        cout<<"M1 : "<<m1<<endl;
        cout<<"M2 : "<<m2<<endl;
        cout<<"M3 : "<<m3<<endl;
    }
};

class Derived : public Base{
    float total,avg;
public:
    void result(){
        total = m1 + m2 + m3;
        avg = total/3;
        display();
        cout<<"Total marks : "<<total<<endl;
        cout<<"Average marks : "<<avg<<endl;
    }
};

int main()
{
    Derived S;
    S.read();
    S.result();
    return 0;
}