#include<iostream>
using namespace std;
class student
{
public:
    int ID ;
    int cgpa ;
    sudipto()
    {
        cout<<"ID :";
        cin>>ID;
        cout<<"cgpa :";
        cin>>cgpa;
        cout<<"ID :"<<ID<<endl;
        cout<<"cgpa :"<<cgpa<<endl;

    }
};
class raihan:public student
{
public:
    shojib()
    {
  cout<<"ID :";
        cin>>ID;
        cout<<"cgpa :";
        cin>>cgpa;
       cout<<"ID :"<<ID<<endl;
       cout<<"cgpa :"<<cgpa<<endl;

    }

};
int main()
{
    raihan r;
    //s1.ID=81;
    //s1.cgpa=3.15;
    r.sudipto();
    r.shojib();

}
