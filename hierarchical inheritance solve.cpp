#include<iostream>
using namespace std;

class baseclass1
{
public:
    void function1()
    {
        cout << "This is first function" << endl;
    }
};

class baseclass2: public baseclass1
{
public:
    void function2()
    {
        cout << "This is 2nd function" << endl;
    }
};

class baseclass3 : public baseclass2
{
public:
    void function3()
    {
        cout << "This is 3rd function" << endl;
    }
};

int main()
{
    baseclass3 obj;
    obj.function1();
    obj.function2();
    obj.function3();

    return 0;
}
