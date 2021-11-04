#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    char op;
    cout<<":Calculator:"<<endl<<endl<<"Available Operator: +,-,*,/,%"<<endl<<endl;
    cout <<"Enter first Number:";
    cin>>n1;
    cout<<"Enter Operator:";
    cin>>op;
    cout<<"Enter Second number:";
    cin>>n2;
    int r;
    if (op=='+'){
        r=n1+n2;
    }else if(op=='-'){
     r=n1-n2;
    }else if(op=='*'){
    r=n1*n2;
    }else if(op=='/'){
    r=n1/n2;
    }else if(op=='%'){
    r=n1%n2;
    }else{
    cout<<"Invalid operator";
    }
    cout<<n1<<" "<<op<<" "<<n2<<" = "<<r<<endl;

    return 0;
}
