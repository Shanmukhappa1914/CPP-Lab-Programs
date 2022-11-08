//16. Demonstrate default constructors and parameterized constructors.
#include <iostream>
using namespace std;
class add{
    int a,b;
public:
    add(){ 
        a = 0;
        b = 0;
    }
    add(int x,int y){
        a = x;
        b = y;
    }
    void display(){
        int c;
        c = a + b;
        cout<<"Sum is : "<<c<<endl;
    }
};

int main()
{
    add a1;
    add a2(10,20);
    cout<<"Sum of two numbers using default constructor"<<endl;
    a1.display();
    cout<<"Sum of two numbers using paramiterize constructor"<<endl;
    a2.display();
    return 0;
}