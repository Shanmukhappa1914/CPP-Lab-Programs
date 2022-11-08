//17. Demonstrate copy constructors.
#include <iostream>
using namespace std;
class Copy{
    int a,b;
public:
    Copy(int x,int y){
        a = x;
        b = y;
    }
    Copy(Copy &i){
        a = i.a;
        b = i.b;
    }
    void show(){
        cout<<"Value of A is : "<<a<<endl;
        cout<<"Value of B is : "<<b<<endl;
    }
};

int main()
{
    Copy c1(10,20);
    Copy c2(c1);
    cout<<"Value of Obj1 : "<<endl;
    c1.show();
    cout<<"Value of Obj2 : "<<endl;
    c2.show();
    return 0;
}