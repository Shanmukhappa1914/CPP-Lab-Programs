//1.Demonstrate digital clock.
#include <iostream>
#include <iomanip>
#include <unistd.h>
#include <stdlib.h>
using namespace std;
void displayClock(int,int,int);
int main()
{
    int h=0,m=0,s=0;
    while(true){
        displayClock(h,m,s);
        sleep(1);
        s++;
        if(s == 60){
            m++;
            if(m == 60){
                h++;
                m = 0;
            }
            s=0;
        }
    }
    return 0;
}

void displayClock(int h,int m,int s)
{
    system("clear");
    cout<<" ***Digital Clock***"<<endl;
    cout<<"---------------------"<<endl;
    cout<<h<<" hrs | "<<m<<" min | "<<s<<" sec"<<endl;
}