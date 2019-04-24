#include<iostream>
using namespace std;
int recfactorial(int num)
{
    if(num==1||num==0)
        return num;
    else
    num=num*recfactorial(num-1);
}
int main()
{
    int num;
    cin>>num;
    int res=recfactorial(num);
    cout<<res<<endl;
}
