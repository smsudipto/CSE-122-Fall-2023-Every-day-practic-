#include<iostream>
using namespace std;
int main()
{
    float Area;
    float r;
    cout<<" enter your redious :"<<endl;
    cin>>r;
    float *p1,*p2;
    p1=&Area;
    p2=&r;
        Area=3.1416*(float)(r*r);
        cout<<"Area="<<Area;
        return 0;

}
