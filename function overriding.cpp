#include<iostream>
using namespace std;
class student
{
public:

    void display(int a)
    {
        cout<<" Student ID:"<<a<<endl;



    }
};
class person:public student
{
public:

    void display(int a)
    {
        cout<<"person ID:"<<a<<endl;

    }
};
class teacher:public person
{
public:

    void display(int a)
    {
        cout<<" teacher ID:"<<a<<endl;

    }
};
int main()
{
    student s;
    s.display(81);
    person p;
    p.display(20);
    teacher t;
    t .display(21);

}


