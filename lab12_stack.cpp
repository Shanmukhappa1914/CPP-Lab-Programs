//12. Implement operations on stack.
#include <iostream>
#define size 3
using namespace std;
class Stack{
    int a[10],top;
public:
    Stack(){
        top = -1;
    }
    void push();
    void pop();
    void display();
};

void Stack :: push(){
    int item;
    if(top == size-1){
        cout<<"Stack Overflow"<<endl;
        return;
    }
    cout<<"Enter item : ";
    cin>>item;
    a[++top] = item;
}

void Stack :: pop(){
    if(top < 0){
        cout<<"Stack Underflow"<<endl;
        return;
    }
    cout<<"Item deleted is : "<<a[top--]<<endl;
}

void Stack :: display(){
    if(top < 0){
        cout<<"Stack Underflow"<<endl;
        return;
    }
    cout<<"Elememts of Stack are\n";
    for(int i=top; i>=0; i--){
        cout<<a[i]<<endl;
    }
}

int main()
{
    int ch;
    Stack S;
    do{
        cout<<"--- Stack Operations ---\n";
        cout<<"1.Push 2.Pop 3.Display 4.Exit\n";
        cout<<"Enter your choice\n";
        cin>>ch;
        switch(ch){
            case 1: S.push();
            break;
            case 2: S.pop();
            break;
            case 3: S.display();
            break;
            case 4:cout<<"Exit";
            break;
            default:cout<<"Invalid choice\n";
            break;
        }
    }while(ch!=4);
    return 0;
}