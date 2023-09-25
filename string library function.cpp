#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
int main()
{
     char ch1[]="ANISUL";
     char ch2[]="islam";
     char ch3[7];
    cout<<ch1<<" "<<ch2<<endl;

    int len=strlen(ch1);
    cout<<"String length:"<<len<<endl;

    strcpy(ch3,ch1);
    cout<<"ch3="<<ch1<<endl;

    strlwr(ch1);
    cout<<"ch1="<<ch1<<endl;

     strupr(ch2);
    cout<<"ch2="<<ch2<<endl;

    int value=strcmp(ch1,ch2);
    {
        if(value==0)
            cout<<"string are equal";
        else
        {
            cout<<"string are not equal";
        }
    }

    getch();
}


