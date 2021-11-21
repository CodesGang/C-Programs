/*Finding factorial with recursion*/

#include <iostream>

using namespace std;

int fact(int );

int main()
{
    int a;
    cout<<"Factorial of numbers Using Recursion"<<endl;
    cout<<"Enter number:";
    cin>>a;

    cout<<"\nFactorial of "<<a<<" numbers ="<<fact(a);

    return 0;
}

int fact(int n)
{
    if(n>1)
        return n* fact(n-1);
    else
        return 1;
}
