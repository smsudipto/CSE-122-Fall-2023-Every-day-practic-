#include<iostream>
using namespace std;
int main()
{
   int num;
   float sum=0;
   cout<<"enter your number :";
   cin>>num;
   for(float i=1.5;i<=num;i=1+i)
   {
       cout<<"+"<<i ;

       sum=sum+i;
       }
       cout<<endl;

    cout<<"sum is="<<sum;


    return 0;

}



