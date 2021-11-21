/*Public inheritance*/

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
class drived:public base
{
private:
    int k;
public:
    void readk();
    void output();
};
void base::readdata()
{
    cout<<" Enter x,y and z :";
    cin>>x>>y>>z;
}
void base::showdata()
{
    cout<<" x="<<x<<endl;
    cout<<" y="<<y<<endl;
    cout<<" z="<<z<<endl;
}
void drived::readk()
{
    cout<<" Enter k=";
    cin>>k;
}
void drived::output()
{
    int s=y+z+k;
    cout<<"Sum is ="<<s<<endl;
}
int main()
{
    drived objd;
    objd.readdata();
    objd.readk();
    objd.showdata();
    objd.output();
    return 0;
}
