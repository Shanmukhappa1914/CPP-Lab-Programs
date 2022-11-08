//8.  Demonstrate Multiple Inheritance.
#include <iostream>
using namespace std;
class Student{
    char name[10];
    int reg_no;
public:
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
    }
};

class Marks{
protected:
    float m1,m2,m3;
public:
    void readMarks(){
        cout<<"Enter three subject marks"<<endl;
        cout<<"M1 : ";
        cin>>m1;
        cout<<"M2 : ";
        cin>>m2;
        cout<<"M3 : ";
        cin>>m3;
    }
    void displayMarks(){
        cout<<"Three subject marks"<<endl;
        cout<<"M1 : "<<m1<<endl;
        cout<<"M2 : "<<m2<<endl;
        cout<<"M3 : "<<m3<<endl;
    }
};

class Test : public Student,public Marks{
    float total,avg;
public:
    void result(){
        total = m1 + m2 + m3;
        avg = total/3;
        display();
        displayMarks();
        cout<<"Total marks : "<<total<<endl;
        cout<<"Average marks : "<<avg<<endl;
    }
};

int main()
{
    Test S;
    S.read();
    S.readMarks();
    S.result();
    return 0;
}