#include <iostream>
using namespace std;
class student
{
public:
    int id;
    double gpa;
    student(int a,double b)
    {
        id=a;
        gpa=b;
    };
    void display()
    {
        cout<<id <<" "<<gpa<<endl;
    }

};
int main()
{
    student sudipto(81, 3.25);
    sudipto.display();


    student raihan(80, 2.25);
    raihan.display();

    return 0;

}



