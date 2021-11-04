/*resolving ambiguity with two base classes*/

#include <iostream>

using namespace std;

class base1
{
public:
    int a;
};
class base2
{
public:
    int a;
};
class drived:public base1, public base2
{
int a;
};

int main()
{
    drived objd;
    objd.base1::a=10;
    objd.base2::a=25;
    cout<<"\nThe value inside \'a\' of base1 is "<<objd.base1::a;
    cout<<"\nThe value inside \'a\' of base2 is "<<objd.base2::a;
    return 0;
}
