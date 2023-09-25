#include<iostream>
#include<conio.h>
using namespace std;
class person
{
public:
    string name;
    int id;
    void display1()
    {
       cout<<"Name:"<<name<<endl;
    cout<<"Id:"<<id<<endl;

    }

};
 class student:public person
{
public:
     int age;
     void display2()
     {

     cout<<"Age:"<<age<<endl;
          cout<<"Name:"<<name<<endl;
    cout<<"Id:"<<id<<endl;

     }

 } ;
 int main()
 {
     student s1;
     s1.id=101;
     s1.name="SUDIPTO MANDAL";
     s1.age=20;
     s1.display2();
     s1.display1();
     getch();
 }
