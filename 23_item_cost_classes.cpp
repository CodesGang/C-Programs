//To display no. of items with cost by using class
#include <iostream>

using namespace std;

class item
{
    int n;
    float cost;
public:
    void getdata(int a, float b); //prototype declaration
    void putdata(void)              //to be defined
    {
        cout<<"\nNumber :"<<n<<endl;
        cout<<"\nCost :"<<cost<<endl;
    }
};
//...........Member Function Definition..............
void item::getdata(int a, float b) //use membership label
{
    n=a;
    cost=b;
}

//............Main Program...........................
int main()
{
     item x;//create object x
     cout<<"\nobject x"<<endl;
     x.getdata(100,299.95); //call member function
     x.putdata(); //call member function
     
     item y;   //create another object
     cout<<"\nobject y"<<endl;
     y.getdata(200,175.50);
     y.putdata();
    return 0;
}
