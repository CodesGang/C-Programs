/*resolving ambiguity*/

#include <iostream>

using namespace std;

class base1
{
private:
    int x;
public:
    void readdata()
    {
        cout<<"\nEnter the value of x:";
        cin>>x;
    }
};
class base2
{
private:
    int y;
public:
    void readdata()
    {
        cout<<"\nEnter the value of y:";
        cin>>y;
    }
};
class drived:public base1, public base2
{
private:
    int k;
public:
    void readdata()
    {
        cout<<"\nEnter the value of k:";
        cin>>k;
    }
};

int main()
{
    drived objd;
    objd.base1::readdata();
    objd.base2::readdata();
    return 0;
}
