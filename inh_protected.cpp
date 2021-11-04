/*Protected inheritance*/

#include <iostream>

using namespace std;

class base
{
private:
    int x;
protected:
    int y;
public:
    int z;
    void readdata();
    void showdata();
};
class drived:protected base
{
private:
    int k;
public:
    void assig();
    void output();
};
void base::readdata()
{
    cout<<" Enter x,y :";
    cin>>x>>y;
}
void base::showdata()
{
    cout<<" x="<<x<<endl;
    cout<<" y="<<y<<endl;
}
void drived::assig()
{
    k=30;
    y=40;
}
void drived::output()
{
    int sum=k+y;
    cout<<"sum= "<<sum<<endl;
}
int main()
{
    drived objd;
    objd.assig();
    objd.output();
    return 0;
}
