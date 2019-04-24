#include<iostream>
using namespace std;
int sumofdigits(int num,int i=0)
{
    if(i==0)
        i=0;
    if(num<10)
        {
            num=num+i;
            return num;
            }
    else
    {
        i+=num%10;
        num/=10;
        sumofdigits(num,i);
    }
}
int main()
{
    int num,a;
    cin>>num;
    a=sumofdigits(num,0);
    cout<<a;
    return 0;
}
