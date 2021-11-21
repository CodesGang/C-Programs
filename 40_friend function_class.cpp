/*Using friend function*/
#include <iostream>

using namespace std;
//friend function
class sample2;       //forward declaration
class sample1
{
private:
    int x;
public:
    sample1(int i)   //constructor
    {
        x=i;
    }
    void display(sample2);  //friend function declaration
};

class sample2
{
private:
    int y;
public:
    sample2 (int j)  //constructor
    {
        y=j;
    }
    friend void sample1::display(sample2);   //friend function declaration
};

void sample1::display(sample2 obj2)
{
    cout<<"Sum is :"<<x +obj2.y;
}
int main()
{
    sample1 obj1(10);
    sample2 obj2(20);
    obj1.display(obj2);
    return 0;
}
