#include<iostream>
using namespace std;
int sumofdigits(int n,int k=0)
{
    if(k==0)
    {
      k=(n%100)/10;
    }
    if(n<100)
    {
      n%=10;
      n=n+k;
      return n;
    }
    else
    {
      n/=10;
      sumofdigits(n,k);
    }
}
int main()
{
    int n;
    cin>>n;
    int a=sumofdigits(n,0);
    cout<<a;
}
