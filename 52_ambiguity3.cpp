/*Concept of virtual class*/

#include <iostream>

using namespace std;

class b
{
protected:
    int data=10;
};
class d1:virtual public b
{
    };
class d2:virtual public b{}    ;
class c:public d1, public d2
{
public:
    int showdata()
    {
        return (data);
    }
};

int main()
{
    c obj;
    int k=obj.showdata();
    cout<<"\nk = "<<k;
    return 0;
}
