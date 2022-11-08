//2.Calculate area and circumference of a circle using inline function.
#include <iostream>
using namespace std;
float pi = 3.142;
inline  void circle(float r){
    cout<<"Area of Circle : "<<(pi*r*r)<<endl;
    cout<<"Circumference of Circle : "<<(2*pi*r)<<endl;
}

int main()
{
    float r;
    cout<<"Enter Radius"<<endl;
    cin>>r;
    circle(r);
    return 0;
}