/*Using static function in class*/
#include <iostream>

using namespace std;

class account
{
private:
    int acc_num;
    string name;
    float balance;
    static float rate;
public:
    void readdata();
    void display();
    void rate_int()
    {
        float intt=balance*rate*0.25;
        balance=balance+intt;
    }
    static void modify_rate(float inc)
    {
        rate=rate+inc;
        cout<<" Modified Rate of interest ="<<rate;
    }
};
float account::rate=0.07;
void account::readdata()
{
    cout<<"\n Enter the details of costumers:";
    cin>>acc_num>>name>>balance;
}
void account::display()
{
    cout<<" Account number is :"<<acc_num;
    cout<<"\n Name is :"<<name;
    cout<<"\n Balance is :"<<balance;
}

int main()
{
    account obj[10];
    int i;
    for(i=0;i<3;i++)
    {
        obj[i].readdata();
    }
    account::modify_rate(0.01);
    obj[0].rate_int();
    obj[1].rate_int();
    obj[2].rate_int();
    for(i=0;i<3;i++)
    {
        obj[i].display();
    }
    return 0;
}
