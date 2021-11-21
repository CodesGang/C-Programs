/*Transpose of matrix*/
#include <iostream>

using namespace std;

int main()
{
    int r,c,a[10][10],s[10][10],i,j;
    cout<<"Enter no. of rows:";
    cin>>r;
    cout<<"Enter no. of columns:";
    cin>>c;
    cout<<"for 1st Matrix: \n";
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            cout<<"enter element["<<i<<"]["<<j<<"]:";
            cin>>a[i][j];
        }
    }
    cout<<"Your Matrix: \n";

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            cout<<a[i][j]<<" ";
            if(j==c)
            {
                cout<< endl;
            }
        }
    }
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            s[j][i]=a[i][j];
        }
    }
    cout<<"The Transpose of Matrix: \n";
    for(i=1;i<=c;i++)
    {
        for(j=1;j<=r;j++)
        {
            cout<<s[i][j]<<" ";
            if(j==r)
            {
                cout<< endl;
            }
        }
    }

    return 0;
}
