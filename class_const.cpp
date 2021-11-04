/*Addition of two numbers using constructors*/

#include <iostream>

using namespace std;
//using constructor
class rect
{
    int a,b;
public:
    rect(int x, int y) //constructor(special member function)
    {
        a=x;
        b=y;
    }
 int add()
 {
     return(a+b);
 }
};
int main()
{
    rect obj(10,30);
    cout<<"addition is :"<<obj.add();
    return 0;
}