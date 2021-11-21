/*Writing complex numbers using constructors*/

#include <iostream>

using namespace std;
//writing a complex numbers
class complex
{
    int r,i;
public:
    complex(int a, int b);
    complex(complex &c, int k)  //using object as argument in constructor
    {
        r=c.r;
        i=c.i;
    }
    void show();
};
complex::complex(int a, int b)
{
    r=a;
    i=b;
}
void complex::show()
{
    cout<<r<<" +i"<<i<<endl;
}
int main()
{
    int x,y,k;
    cout<<"Enter real part :";
    cin>>x;
    cout<<"Enter imaginary part :";
    cin>>y;
    complex obj1(x,y);
    k=7;
    complex obj2(obj1,k);
    cout<<" obj =";
    obj1.show();
    cout<<" obj2 =";
    obj2.show();
    return 0;
}
