#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    int *p1,*p2,*p3;
    p1=&num1;
    p2=&num2;
    p3=&num3;
    int mul=*p1 * *p2 * *p3;
    cout<<"Multification is :"<<mul<<endl;
    getch ();
}
