/*Swapping of two numbers using reference*/
#include <iostream>

using namespace std;

void swap(int &x,int &y){
 int z;
 z=x;
 x=y;
 y=z;
 cout<<"\nAfter Swapping the variables x ="<<x<<" y ="<<y;
}

int main()
{
    int a,b;
    cout<<"Swapping by reference"<<endl;
    cout<<"Enter two numbers (a b):";
    cin>>a>>b;
    cout<<"\nBefore calling a="<<a<<" b="<<b;
    swap(a,b);
    cout<<"\nAfter calling a="<<a<<" b="<<b;
    return 0;
}