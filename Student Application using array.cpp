#include<iostream>
using namespace std;
int main()

{
    int n,sum=0;
    cout<<"Enter your student  number:";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cout<<"student  number "<<i+1<<"=";
        cin>>array[i];
        sum=sum+array[i];
    }
    cout<<"student sum is :"<<sum<<endl;
    float Ave=(float)sum/n;
    cout<<"Average number is "<<Ave;
    return 0;
}
