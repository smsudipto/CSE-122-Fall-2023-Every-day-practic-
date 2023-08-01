#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int num;
   int sum=0;
   cout<<"enter your number :";
   cin>>num;
   for(int i=1;i<=num;i=1+i)
   {
       cout<<"+"<<pow(i,5) ;

       sum=sum+pow(i,5);
       }
       cout<<endl;

    cout<<"sum is="<<sum;


    return 0;

}



