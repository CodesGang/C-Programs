/*Adding two matrices*/
#include <iostream>

using namespace std;

int main()
{
    int r,c,a[10][10],b[10][10],s[10][10],i,j;
    cout<<"Enter no. of rows:";
    cin>>r;
    cout<<"Enter no. of columns:";
    cin>>c;
    cout<<"for 1st Matrix \n";
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            cout<<"enter element["<<i<<"]["<<j<<"]:";
            cin>>a[i][j];
        }
    }
    cout<<"for 2nd Matrix \n";
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
            s[i][j]=a[i][j] + b[i][j];
        }
    }
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            cout<<s[i][j]<<" ";
            if(j==2)
            {
                cout<< endl;
            }
        }
    }
    return 0;
}
