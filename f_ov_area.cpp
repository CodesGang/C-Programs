#include <iostream>
#include<cmath>

using namespace std;
//function declarations

void area(double);
void area(double, double);
void area(double, double, double);
int main()
{
    double a=5,b=6,c=3,d=4,e=5,f=6;
    area(a); //function calling
    area(b,c);
    area(d,e,f);
    return 0;
}
//function definitions
void area(double x)
{
    cout<<"\nArea of Square ="<<x*x;
}

void area(double x, double y)
{
    cout<<"\nArea of Rectangle ="<<x*y;
}

void area(double x, double y, double z)
{
    float s=(x*y*z)/2;
    float ar=sqrt(s*(s-x)*(s-y)*(s-z));
    cout<<"\nArea of Triangle ="<<ar;
}
