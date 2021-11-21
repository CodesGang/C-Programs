/*using function overloading concept*/

#include <iostream>
#include<cmath>

using namespace std;
//function declaration

void sum(int, int);
void sum(float, float);
void sum(char, char);
int main()
{
    int a=10,b=20;
    float c=7.5,d=9.19;
    char e='A',f='B';
    sum(a,b);  //function calling
    sum(c,d);
    sum(e,f);
    return 0;
}

//function definitions
void sum(int x, int y)
{
    cout<<"\nSum of "<<x<<" + "<<y<<" ="<<x+y;
}

void sum(float x, float y)
{
    cout<<"\nSum of "<<x<<" + "<<y<<" ="<<x+y;
}

void sum(char x, char y)
{
    cout<<"\nSum of "<<x<<" + "<<y<<" ="<<x+y;
}
