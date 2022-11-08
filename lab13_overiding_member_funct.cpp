//13.Demonstrate derived class constructors and overriding member function in base and derived class.
#include <iostream>
using namespace std;
class Alpha{
    int x;
public:
    Alpha(int i){
        x = i;
        cout<<"Alpha initialization\n";
    }
    void show(){
        cout<<"X = "<<x<<endl;
    }
};

class Beta{
    int y;
public:
    Beta(int j){
        y = j;
        cout<<"Beta initialization\n";
    }
    void show(){
        cout<<"Y = "<<y<<endl;
    }
};

class Gamma : public Alpha,public Beta{
    int m,n;
public:
    Gamma(int a,int b,int c,int d):Alpha(a),Beta(b){
        m = c;
        n = d;
        cout<<"Gamma initialization\n";
    }
    void show(){
        cout<<"M = "<<m<<endl;
        cout<<"N = "<<n<<endl;
    }
};

int main()
{
    Gamma G(10,20,30,40);
    G.Alpha::show();
    G.Beta::show();
    G.show();
    return 0;
}