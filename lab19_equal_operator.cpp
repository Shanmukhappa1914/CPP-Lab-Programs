//19.Compare two strings using equal operator.
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
class strg{
  public:
    char str[100];
    void read();
    void display();
    void operator ==(strg);
};
void strg::read(){
    cin>>str;
    // gets(str);
}
void strg::display(){
    cout<<str<<endl;
}
void strg::operator ==(strg s){
    if(strcmp(str,s.str)==0)
     cout<<"Strings are equal\n";
     else
      cout<<"Strings are not equal\n";
}

int main()
{
    strg s1,s2;
    cout<<"Enter first string: "<<endl;
    s1.read();
    cout<<"Enter second string: "<<endl;
    s2.read();
    cout<<"First string "<<endl;
    s1.display();
    cout<<"Second string "<<endl;
    s2.display();
    s1==s2;
    return 0;
}