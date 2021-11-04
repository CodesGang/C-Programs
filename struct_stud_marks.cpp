/*Printing details of student using structure array*/
#include <iostream>

using namespace std;

struct detail
{
    int rollno;
    string name;
    string branch;
    int sem;
    float s_marks[5];
    float t_marks;
};

int main()
{
    detail student[5];
    cout<<"Enter the details of five students: \n";
    for(int i=0; i<5;i++)
    {
        cout<<"Enter details of "<<i+1<< "th student :\n";
        cout<<"\n Enter name: ";
        cin>>student[i].name;
        cout<<"\n Enter Roll NO.:";
        cin>>student[i].rollno;
        cout<<"\n Enter Branch :";
        cin>>student[i].branch;
        cout<<"\n Enter Semester :";
        cin>>student[i].sem;
        cout<<" Enter the marks of five subjects :\n";
        for(int j=0;j<5;j++)
        {
            cout<<" enter the marks of "<<j+1<<" subjects :";
            cin>>student[i].s_marks[j];
        }
        student[i].t_marks=student[i].s_marks[0]+student[i].s_marks[1]+student[i].s_marks[2]+student[i].s_marks[3]+student[i].s_marks[4];
    }
    cout<<" Details of students who get more than 100 marks :\n";
    for(int i=0;i<5;i++)
    {
        if((student[i].t_marks)>400)
        {
            cout<<"\n Name :"<<student[i].name;
            cout<<"\n Roll no. :"<<student[i].rollno;
            cout<<"\n Branch :"<<student[i].branch;
            cout<<"\n Semester :"<<student[i].sem;
            cout<<"\n The marks of the five subjects are :\n";
            for(int j=0;j<5;j++)
            {
                cout<<student[i].s_marks[j]<<endl;
            }
             cout<<"\n Total marks :"<<student[i].t_marks<<endl;
        }
    }
    return 0;
}
