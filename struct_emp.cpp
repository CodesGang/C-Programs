/*Details of employee using structure*/

#include <iostream>

using namespace std;

struct date
{
    int day;
    int month;
    int year;
};
struct employ
{
    int emp_code;
    string emp_name;
    float salary;
    date doj;
};

int main()
{
    employ e1;
    cout<<" Enter the code, name, and salary of emp :";
    cin>>e1.emp_code>>e1.emp_name>>e1.salary;
    cout<<" Enter date of joining :";
    cin>>e1.doj.day>>e1.doj.month>>e1.doj.year;
    cout<<"\n Code:"<<e1.emp_code<<"\n Name:"<<e1.emp_name<<"\n Salary :"<<e1.salary;
    cout<<"\n Date:"<<e1.doj.day<<"-"<<e1.doj.month<<"-"<<e1.doj.year;
    return 0;
}
