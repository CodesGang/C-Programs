/*Building nested class to store details of student*/
#include <iostream>

using namespace std;
//nested class
//student data
class student
{
private:
    int rollno;
    string name;
public:
    class date
    {
    private:
        int day,month,year;
    public:
        void readdata();
        void showdata();
    }dobj;
    void readdata();
    void showdata();
};
void student::readdata()
{
    cout<<"Enter roll no. and name :";
    cin>>rollno>>name;
    dobj.readdata();//date class
}
void student::showdata()
{
    cout<<"Roll no. :"<<rollno;
    cout<<"\n Name :"<<name<<endl;
}
void student::date::readdata()
{
    cout<<"Enter date of birth :";
    cin>>day>>month>>year;
}
void student::date::showdata()
{
    cout<<"Date :"<<day<<"/"<<month<<"/"<<year;
}
int main()
{
    student obj1;
    obj1.readdata();
    obj1.showdata();
    obj1.dobj.showdata();
    return 0;
}
