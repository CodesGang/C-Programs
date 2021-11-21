//To find largest using nesting of member functions
#include <iostream>

using namespace std;

class sett
{
    int m,n;
public:
    void input(void);
    void display(void);
    int largest(void);
};

int sett:: largest(void)
{
    if(m>n)
        return(m);
    else
        return(n);
}

void sett::input(void)
{
    cout<<"Input values of m and n:";
    cin>>m>>n;
}

void sett::display(void)
{
    cout<<"largest value ="<<largest()<<endl; //calling member function
}
int main()
{
     sett a;
     a.input();
     a.display();
    return 0;
}
