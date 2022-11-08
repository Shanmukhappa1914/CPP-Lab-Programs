//20.Demonstrate Virtual Function.
#include <iostream>
using namespace std;
class Base{
public:
    virtual void output(){ 
        cout<<"Output base class"<<endl;
    }
    void display(){
        cout<<"Display base class"<<endl;
    }
};

class Derived : public Base{
public:
    void output(){
        cout<<"Output derived class"<<endl;
    }
    void display(){
        cout<<"Display derived class"<<endl;
    }
};

int main()
{
    Base * bptr;
    Derived d;
    bptr = &d;
    bptr -> output();
    bptr -> display();
    d.display();
    return 0;
}