#include<iostream>
using namespace std;
void sum(int a,int b)
{
    int add=a+b;
   cout<<"sum is="<<add<<endl;
}

void sum(int a,int b,int c)
{
    int add=a+b+c;
   cout<<"sum is="<<add<<endl;
}
int main()
{
   sum(10,20);
   sum(20,30,40);
}
