#include <iostream>
using namespace std;
int main()
{
    int var[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr=&var;
    cout<<"Enter the position of the number to be printed: "<<endl;

    int n= *ptr;
    cout<<"The number at the entered position is: "<<n;
}
