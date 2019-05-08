#include<iostream>
using namespace std;
int reverse(int n,int c=0)
{
    if(c==0)
    {
        c=0;
    }
    if(n<10)
    {
        c=c*10;
        n+=c;
        return n;
    }
    else
    {
        c=c*10+n%10;
        n/=10;
        reverse(n,c);
    }
}
int main()
{
    int n;
    cin>>n;
    int a=reverse(n);
    cout<<a;

}
