#include<iostream>
using namespace std;
int main()
{

    int array[3][3] = {{2,2,3},
                       {4,5,6},
                       {7,8,9}
                      };
    for(int row=0; row<3; row++)
    {
        for( int col=0; col<3; col++)
        {
            cout<<array[row][col]<<" ";
        }
        cout<<endl;
    }



    return 0;
}
