//11.Demonstrate to overload arithmetic assignment “+=” and “-=” operators.
#include <iostream>
using namespace std;
class arithmetic{
    int a;
public:
    arithmetic(int x){ 
        a=x;
    }
    friend void operator +=(arithmetic c1,arithmetic c2){
        c1.a += c2.a;
        cout<<"Sum of two matrices using (+= operator) is : "<<c1.a<<endl;
    }
    friend void operator -=(arithmetic c1,arithmetic c2){
        c1.a -= c2.a;
        cout<<"Sum of two matrices using -= operator is : "<<c1.a<<endl;
    }
    void show(){ 
        cout<<a<<endl;
    }
};

int main()
{
    arithmetic c1(-20),c2(-10);
    cout<<"Value of first number : ";
    c1.show();
    cout<<"Value of second number : ";
    c2.show();
    operator +=(c1,c2);
    operator -=(c1,c2);
    return 0;
}