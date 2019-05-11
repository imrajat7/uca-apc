#include<iostream>
using namespace std;
void fibonacci(int num){
    int a=0;
    int b=1;
    if(num>0)cout<<a;
    if(num>=2)cout<<b;
    for(int i=2;i<num;i++){
      cout<<a<<b;
      a=a+b;
      b=a+b;
      i+=2;
    }
    if(num%2!=0&&num>1)
    cout<<a+b;
}
int main()
{
    int num;
    cout<<"Enter the number to be tested:\n";
    cin>>num;
    fibonacci(num);
}
