//5.Input roll number, name, marks of three students and display total and average.
#include <iostream>
using namespace std;
class Student{
    char name[10];
    int reg_no;
    float m1,m2,m3;
public:
    void read(){
        cout<<"---Enter Student details---"<<endl;
        cout<<"Name : ";
        cin>>name;
        cout<<"Reg_no : ";
        cin>>reg_no;
        cout<<"Enter three subject marks"<<endl;
        cout<<"M1 : ";
        cin>>m1;
        cout<<"M2 : ";
        cin>>m2;
        cout<<"M3 : ";
        cin>>m3;
    }
    void display(){
        float total,avg;
        total = m1 + m2 + m3;
        avg = total/3;
        cout<<"---* Student Details *---"<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Reg_no : "<<reg_no<<endl;
        cout<<"Three subject marks"<<endl;
        cout<<"M1 : "<<m1<<endl;
        cout<<"M2 : "<<m2<<endl;
        cout<<"M3 : "<<m3<<endl;
        cout<<"Total marks : "<<total<<endl;
        cout<<"Average marks : "<<avg<<endl;
    }
};

int main()
{
    int n;
    cout<<"Enter the number of students : ";
    cin>>n;
    Student s[n];
    for(int i=0; i<n; i++){
        s[i].read();
    }
    for(int i=0; i<n; i++){
        s[i].display();
    }
    return 0;
}