//static class member
#include <iostream>

using namespace std;

class item
{
    static int countt;
    int number;
public:
    void getdata(int a)
    {
        number =a;
        countt++;
    }
    void getcountt()
    {
        cout<<"countt:";
        cout<<countt<<"\n";
    }
};
int item::countt;  //definition of static data member
int main()
{
     item a,b,c;  //countt is initialized to zero
     a.getcountt(); //display countt
     b.getcountt();
     c.getcountt();
     a.getdata(100); //getting data into object a
     b.getdata(200); //getting data into object b
     c.getdata(300); // getting data into object c
     cout<<"After reading data"<<endl;
     a.getcountt();
     b.getcountt();
     c.getcountt();
    return 0;
}
