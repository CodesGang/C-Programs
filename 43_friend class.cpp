/*Creating friend class*/
#include <iostream>

using namespace std;
//friend class

class sample1
{
private:
    int x,y,z;
public:
    sample1(int i, int j, int k)   //constructor
    {
        x=i;
        y=j;
        z=k;
    }
    friend class sample2;  //friend class declaration
};

class sample2
{
public:
    void display1(sample1 obj1)
    {
        cout<<" X="<<obj1.x;
    }
    void display2(sample1 obj2)
    {
        cout<<" y="<<obj2.y;
    }
    void display3(sample1 obj3)
    {
        cout<<" z="<<obj3.z;
    }
};

int main()
{
    sample1 obj4(1,2,3);
    sample2 obj5;
    obj5.display1(obj4);
    obj5.display2(obj4);
    obj5.display3(obj4);
    return 0;
}
