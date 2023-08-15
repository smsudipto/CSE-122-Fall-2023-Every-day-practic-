#include <iostream>
using namespace std;
class student
{
public:
   int id;
    double gpa;
    void display()
    {
       cout<<id <<" "<<gpa<<endl;
    }

};
int main()
{
    student sudipto,raihan;
    sudipto.id=81;
    sudipto.gpa=3.25;
    sudipto.display();


    raihan.id=80;
    raihan.gpa=2.25;
    raihan.display();

    return 0;

}

