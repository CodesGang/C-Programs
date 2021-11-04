/*Printing out simple matrix using arrays*/
#include <iostream>

using namespace std;

int main()
{
    int r,c,a[10][10],b[10][10],i,j;
    cout<<"Enter no. of rows:";
    cin>>r;
    cout<<"Enter no. of columns:";
    cin>>c;

    for(i=1;i<=r;i++)  //for rows
    {
        for(j=1;j<=c;j++)  //for columns
        {
            cout<<"enter element["<<i<<"]["<<j<<"]";
            cin>>a[i][j];  //input
        }
    }
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            cout<<a[i][j]<<" ";  //output
            if(j==c)  //changing columns
            {
                cout<< endl;
            }
        }
    }
    return 0;
}
