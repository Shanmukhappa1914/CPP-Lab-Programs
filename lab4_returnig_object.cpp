//4.Demonstrate object as function arguments and returning objects from function.
#include <iostream>
using namespace std;
class add{
    int num;
public:
    void read(int);
    void display();
    friend add sum(add,add);
};
void add::read(int a){
    cout<<"Enter number "<<a<<endl;
    cin>>num;
}
void add::display(){
    cout<<"Sum of two numbers is : "<<num<<endl;
}
add sum(add m1,add m2){
    add m3;
    m3.num = m1.num + m2.num;
    return m3;
}

int main()
{
    add m1,m2,m3;
    m1.read(1);
    m2.read(2);
    m3=sum(m1,m2);
    m3.display();
    return 0;
}