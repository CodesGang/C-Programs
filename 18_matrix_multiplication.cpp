/*Multiplying two matices*/

#include <iostream>

using namespace std;

int main()
{
    int r,c,a[10][10],b[10][10],s[10][10],i,j,k;
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
    cout<<"for 2nd Matrix: \n";
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            cout<<"enter element["<<i<<"]["<<j<<"]:";
            cin>>b[i][j];
        }
    }
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
             s[i][j]=0;
        }
    }

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            for(k=1;k<=c;k++)
            {
            s[i][j]+=a[i][k] * b[k][j];
            }
        }
    }
    cout<<"The Resultant Matrix: \n";
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            cout<<s[i][j]<<" ";
            if(j==c)
            {
                cout<< endl;
            }
        }
    }
    return 0;
}
