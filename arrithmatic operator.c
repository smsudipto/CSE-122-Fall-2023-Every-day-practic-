#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    double num1,num2;
    double sum,sub,mul;
    double div;

    cout<< "Enter your number one :";
    cin>>num1;

    cout<< "Enter your number two :";
    cin>>num2;
    cout<<setw(15);
cout<<showpoint;
cout<<fixed;
cout<<setprecision(2);

    sum=num1+num2;
    cout<<" sum is:"<<sum<<endl;

     sub=num1-num2;
    cout<<" subtraction is:"<<sub<<endl;

     mul=num1*num2;
    cout<<" multification is:"<<mul<<endl;
    cout<<noshowpoint;
     div=num1/num2;
    cout<<" division is:"<<div<<endl;

    getch();


}
