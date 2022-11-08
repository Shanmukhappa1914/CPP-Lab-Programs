//9.Perform addition of 2 matrices using operator overloading.
#include <iostream>
using namespace std;
class Mat{
    int a[10][10],r,c;
public:
    void read();
    void display();
    void operator +(Mat);
};

void Mat::read(){
    cout<<"Enter the order of the matrices"<<endl;
    cin>>r>>c;
    cout<<"Enter the elements of matrices\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
}

void Mat::display(){
    cout<<"The elements of the matrix are\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void Mat::operator +(Mat m1){
    if(r!=m1.r || c!=m1.c){
        cout<<"Addition is not possible\n";
        return;
    }
    for(int i=0;i<m1.r;i++){
        for(int j=0;j<m1.c;j++){
            a[i][j]+=m1.a[i][j];
        }
    }
    cout<<"Sum of two matrices\n";
    display();
}

int main()
{
    Mat m1,m2;
    cout<<"Enter First Matrix"<<endl;
    m1.read();
    cout<<"Enter Second Matrix"<<endl;
    m2.read();
    cout<<"First Matrix\n";
    m1.display();
    cout<<"Second Matrix\n";
    m2.display();
    m1+m2;
    return 0;
}