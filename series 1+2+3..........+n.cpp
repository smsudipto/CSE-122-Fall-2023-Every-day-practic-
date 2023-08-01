#include<iostream>
using namespace std;
int main()
{
   int num;
   int sum=0;
   cout<<"enter your number :";
   cin>>num;
   for(int i=1;i<=num;i=1+i)
   {
        cout<<"+"<<i ;
      sum=+sum+i;
   }
 cout<<endl;
    cout<<"sum is="<<sum;


    return 0;

}

