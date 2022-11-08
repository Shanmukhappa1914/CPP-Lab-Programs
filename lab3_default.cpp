//3.Demonstrate default arguments function.
#include <iostream>
using namespace std;
float simple(int p,int t,float r=2.5){
    return (p*t*r)/100;
}

int main()
{
    int p,t;
    cout<<"Enter principle amount : ";
    cin>>p;
    cout<<"Enter time : ";
    cin>>t;
    cout<<"Simple interest when rate 2.5 is : "<<simple(p,t)<<endl;
    cout<<"Simple interest when rate 3.75 is : "<<simple(p,t,3.75)<<endl;
    return 0;
}