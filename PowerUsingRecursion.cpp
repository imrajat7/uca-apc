#include<iostream>
using namespace std;
int numpower(int num,int power)
{
	if(power==0)
	return 1;
	if(power==1||num==0)
	return num;
	int res;
	if(power%2==0)
	{
		res=numpower(num,power/2);
		res=res*res;
	}
	else
	{
		power=power-1;
		res=numpower(num,power/2);
		res=res*res;
		res=res*num;
	}
	return res;
}
int main()
{
	int num,power;
	cin>>num;
	cin>>power;
	cout<<numpower(num,power);
	return 0;
}
