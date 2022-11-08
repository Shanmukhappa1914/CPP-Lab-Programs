//15.Demonstrate class template.
#include <iostream>
using namespace std;
template<class T>
class Test{
    T a,b;
public:
    void getdata(){
        cout<<"Enter the value of a : ";
        cin>>a;
        cout<<"Enter the value of b : ";
        cin>>b;
    }
    void sum();
};
template<class T>
void Test<T>::sum(){
    cout<<"Addition of A and B is : "<<(a+b)<<endl;
}

int main()
{
    Test <int> t1;
    cout<<"Addition of two integers"<<endl;
    t1.getdata();
    t1.sum();
    Test <float> t2;
    cout<<"Addition of two Decimal numbers"<<endl;
    t2.getdata();
    t2.sum();
    return 0;
}