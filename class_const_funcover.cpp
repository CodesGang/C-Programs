/*Finding area of rectangle using function overloading in class*/

#include <iostream>

using namespace std;
//using constructor
class rectangle
{
    int l,b;
public:
    rectangle()
    {
        l=b=0;
    }
    rectangle(int x)
    {
        l=b=x;
    }
    rectangle(int x, int y) //constructor(special member function)
    {
        l=x;
        b=y;
    }
 void area()
 {
     int ar;
     ar=l*b;
     cout<<"\nArea of rectangle is :"<<ar;
 }
};
int main()
{
    rectangle obj1;
    rectangle obj2(10);
    rectangle obj3(5,10);
    obj1.area();
    obj2.area();
    obj3.area();
    return 0;
}
