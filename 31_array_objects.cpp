//details of employee using arrays of objects
#include <iostream>

using namespace std;

class employee
{
    string name; //string as class member
    float age;
public:
    void getdata();
    void putdata();
};
void employee :: getdata()
{
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter age: ";
    cin>>age;
}
void employee :: putdata()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}
const int size=3;
int main()
{
     employee manager[size];
     for(int i=0;i<size;i++)
     {
         cout<<"\nDetails of manager"<<i+1<<endl;
         manager[i].getdata();
     }
     cout<<endl;
     for(int i=0;i<size;i++)
     {
         cout<<"\nManager"<<i+1<<endl;
         manager[i].putdata();
     }
    return 0;
}
