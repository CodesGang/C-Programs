/*Seeing difference between auto and static variables*/

#include <iostream>

using namespace std;

int main()
{
    void f1();
    void f2();
    f1();
    f1();
    f1();
    cout<<endl;
    f2();
    f2();
    f2();
    return 0;
}

void f1()
{
    auto int n=1;
    n++;
    cout<<" \n n="<<n;
}

void f2()
{
    static int m=1;
    m++;
    cout<<" \n m="<<m;
}
