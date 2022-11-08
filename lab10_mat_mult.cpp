//10.Demonstrate multiplication of two matrix using operator overloading.
#include <iostream>
using namespace std;
class Mat{
    int a[10][10],r,c;
public:
    void read();
    void display();
    friend void operator *(Mat,Mat);
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

void operator *(Mat m1,Mat m2){
    int a[10][10];
    if(m1.c != m2.r){
        cout<<"Multiplication is not possible\n";
        return;
    }
    for(int i=0;i<m1.r;i++){
        for(int j=0;j<m2.c;j++){
            a[i][j] = 0;
            for(int k=0;k<m1.c;k++){
                a[i][j] += (m1.a[i][k]*m2.a[k][j]);
            }
        }
    }
    cout<<"Multiplication of two matrices is \n";
    for(int i=0;i<m1.r;i++){
        for(int j=0;j<m2.c;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
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
    operator *(m1,m2);
    return 0;
}