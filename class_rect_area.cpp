/*Area of rectangle using class (input and output)*/ 
#include<iostream>
using namespace std;

class rectangle
{
private:
    int l,b;
public:
    void readdata(int, int);
    void area()
    {
        int ar=l*b;
        cout<<"Area of rectangle is:"<<ar;
    }
};
void rectangle::readdata(int x, int y)
    {
        l=x;
        b=y;
    }
int main()
{
    rectangle r1;
    r1.readdata(5,10);
    r1.area();
    return 0;
}
