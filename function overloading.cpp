#include<iostream>
using namespace std;
class student
{
public:

    void display(int a)
    {
        cout<<"ID:"<<a<<endl;



    }
};
class person:public student
{
public:

    void display(string a)
    {
        cout<<"person name:"<<a<<endl;

    }
};
class teacher:public person
{
public:

    void display(string a)
    {
        cout<<" teacher name:"<<a<<endl;

    }
};
int main()
{
    student s;
    s.display(10);
    person p;
    p.display("Anisul Islam");
    teacher t;
    t .display("Sudipto");

}


