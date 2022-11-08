//14.Sort elements using function templates.
#include <iostream>
using namespace std;
template <class T>
class sort{
public:
    T a[20],temp;
    int n;
    void read();
    void exchange();
};

template<class T>
void sort<T>::read(){
    cout<<"Enter the size of array\n";
    cin>>n;
    cout<<"Enter the array elements\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}

template<class T>
void sort<T>::exchange(){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout<<"Sorted array is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}

int main()
{
    cout<<"Sorting Integer type array"<<endl;
    sort<int>s1;
    s1.read();
    s1.exchange();
    cout<<"Sorting Decimal type array"<<endl;
    sort<float>s2;
    s2.read();
    s2.exchange();
    return 0;
}