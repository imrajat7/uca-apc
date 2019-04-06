#include<bits/stdc++.h>
using namespace std;
int main() {
  long n,i,lst1,lst2;
  cin>>n;
  long a[n];
  for(i=0;i<n;i++)
  cin>>a[i];
  sort(a,a+n);
  lst1=a[n-1];
  lst2=lst1;
  for(i=n-2;i>=0;i--)
  {
    if(a[i]<lst1)
    {
        lst2=a[i];
        break;
    }
  }
  cout<<lst2%lst1<<endl;
  return 0;
}
