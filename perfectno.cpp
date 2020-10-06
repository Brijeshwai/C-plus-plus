#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int n,i,sum=0;
	cout<<"Enter a number";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(2*n==sum)									
		{cout<<"perfect number";}
	else
		cout<<"not a perfect number";
	return 0;
}
