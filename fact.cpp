/*using factorial with function*/
#include <iostream>

using namespace std;

void fact(int n){
    int f=1;
  for(int i=1;i<=n;i++){
    f *=i;

  }
 cout<<"\nFactorial of "<<n<<" numbers ="<<f;
}

int main()
{
    int a;
    cout<<"Factorial of numbers"<<endl;
    cout<<"Enter number:";
    cin>>a;

    fact(a);

    return 0;
}
