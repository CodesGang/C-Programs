//overloaded constructors
#include <iostream>

using namespace std;

class complex
{
    float x,y;
public:
    complex(){}                //constructor no arg
    complex(float a){x=y=a;}  //constructor-one arg
    complex(float real, float imag)  //constructor-two arg
    {
        x=real;y=imag;
    }
    friend complex sum(complex , complex);
    friend void show(complex);
};

complex sum(complex c1, complex c2) //friend
{
    complex c3;
    c3.x=c1.x+c2.x;
    c3.y=c2.y+c2.y;
}
void show(complex c)  //friend
{
    cout<<c.x<<" + j"<<c.y<<endl;
}
int main()
{
     complex A(2.7,3.5); //define & initialize
     complex B(1.6); //define & initialize
     complex C;    //define

     C=sum(A,B);  //sum() is a friend
     cout<<"A = ";show(A);  //show() is also friend
     cout<<"B = ";show(B);
     cout<<"C = ";show(C);

     //Another way to give initial values (second method)
     complex P,Q,R;  //define P,Q,R
     P=complex(2.5,3.9); //initialize P
     Q=complex(1.6,2.5); //initialize Q
     R=sum(P,Q);
     cout<<endl;
     cout<<"P = ";show(P);
     cout<<"Q = ";show(Q);
     cout<<"R = ";show(R);
    return 0;
}
