/*Creating array of objects*/

#include <iostream>

using namespace std;

class account
{
private:
    int acc_num;
    string name;
    float balance;
public:
    void readdata();
    void display();
};
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
    for(i=0;i<3;i++)
    {
        obj[i].display();
    }
    return 0;
}
