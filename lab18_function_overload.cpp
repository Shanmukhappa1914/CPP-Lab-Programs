//18.Find area and circumference of rectangle and triangle using function overloading.
#include <iostream>
using namespace std;
float area(float ba,float h){
    return (0.5*ba*h);
}
float circumference(float s1,float s2,float s3){
    return (s1+s2+s3);
}
float area(float l,int b){
    return l*b;
}
float circumference(float l,float b){
    return (2*(l+b));
}

int main()
{
    int br;
    float l,b,ba,h,s1,s2,s3;
    cout<<"Calculating area of Triangle\n";
    cout<<"Enter base and hieght\n";
    cout<<"base : ";
    cin>>ba;
    cout<<"height : ";
    cin>>h;
    cout<<"Area of Triangle is : "<<area(ba,h)<<endl;
    cout<<"\n Calculating cirumference of Triangle\n";
    cout<<"Enter three sides\n";
    cout<<"S1 : ";
    cin>>s1;
    cout<<"S2 : ";
    cin>>s2;
    cout<<"S3 : ";
    cin>>s3;
    cout<<"circumference of Triangle is : "<<circumference(s1,s2,s3)<<endl;
    cout<<"\nCalculating area of Rectagle\n";
    cout<<"Enter length and breadth\n";
    cout<<"length : ";
    cin>>l;
    cout<<"breadth : ";
    cin>>br;
    cout<<"Area of Rectagle is : "<<area(l,br)<<endl;
    cout<<"\nCalculating circumference of Rectagle\n";
    cout<<"Enter length and breadth\n";
    cout<<"length : ";
    cin>>l;
    cout<<"breadth : ";
    cin>>b;
    cout<<"Area of Rectagle is : "<<circumference(l,b)<<endl;
    return 0;
}