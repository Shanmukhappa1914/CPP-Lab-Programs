//6.Swap two numbers using friend function.
#include <iostream>
using namespace std;
class Swap{
    int a,b;
public:
    void read(){
        cout<<"Enter two numbers"<<endl;
        cin>>a>>b;
    }
    friend void display(Swap s1){
        int temp;
        cout<<"Number before swapping "<<endl;
        cout<<"A : "<<s1.a<<" B : "<<s1.b<<endl;
        temp = s1.a;
        s1.a = s1.b;
        s1.b = temp;
        cout<<"Number after swapping "<<endl;
        cout<<"A : "<<s1.a<<" B : "<<s1.b<<endl;
    }
};

int main()
{
    Swap S;
    S.read();
    display(S);
    return 0;
}