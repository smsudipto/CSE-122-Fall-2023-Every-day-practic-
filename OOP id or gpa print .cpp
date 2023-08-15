#include <iostream>
using namespace std;
class student
{
public:
   int id;
    double gpa;

};
int main()
{
    student sudipto;
    sudipto.id=81;
    sudipto.gpa=3.25;
    cout<< sudipto.id <<" "<<sudipto.gpa<<endl;

    student raihan;
    raihan.id=80;
    raihan.gpa=2.25;
    cout<< raihan.id <<" "<< raihan.gpa<<endl;
    return 0;

}
