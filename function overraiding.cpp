#include<iostream>
using namespace std;
class student
{
    public:
        void display()
        {
            cout<<" I am a student: "<<endl;
        }

};
class person:public student
{
    public:
        void display()
        {
            cout<<" I am a person: "<<endl;
        }

};
class teacher:public student
{
    public:
        void display()
        {
            cout<<" I am a teacher: "<<endl;
        }

};
int main()
{
 student s;
 s.display();
 person p;
 p.display();
 teacher t;
 t.display();

}
