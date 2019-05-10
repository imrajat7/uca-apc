#include<iostream>
using namespace std;
int main()
{
  int i,k;
  char c,ch;
  for(i=1;i<=6;i++)
  {
    for(ch=65;ch<=71-i;ch++)
    cout<<ch;
    int p=(2*i)-3;
    for(k=1;k<=p;k++)
    cout<<" ";
    if(i==1)
    c=(char)69;
    else
    c=(char)71-i;
    for(c;c>=65;c--)
    cout<<c;
    cout<<endl;
  }
}
