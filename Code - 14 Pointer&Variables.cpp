#include <iostream>
using namespace std;
int main()
{
    int var=10;
    int *ptr= &var;
    cout<<"Value of var: "<<var<<endl<<"Value present at address given by ptr: "<<*ptr<<endl<<"Address of var: "<<&var<<endl<<"Value of ptr: "<<ptr<<endl<<"Address of ptr: "<<&ptr;
}
