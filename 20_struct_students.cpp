/*Details of students unsing structure*/
#include <iostream>

using namespace std;

struct student
{
    int rollno;
    string name;
    float marks;
};

int main()
{
    student s1={101,"Mike",74.5};
    cout<<"Student Details are :";
    cout<<"\n Roll No. is:"<<s1.rollno;
    cout<<"\n Name is:"<<s1.name;
    cout<<"\n Marks are:"<<s1.marks;
    return 0;
}
