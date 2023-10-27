#include <iostream>
using namespace std;
int main()
{
    int var[5]={1,2,3,4,5};
    int *ptr = &var[0];
    
    for (int i=0;i<5;i++)
    {
     cout<<"\n The var value printed using pointer is: "<<*ptr<<endl;
     ptr++;
    }
    return 0;

}
