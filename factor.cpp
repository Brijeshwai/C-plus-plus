#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int n,i;
	cout<<"Enter a Number";
	cin>>n;
	for (int i = 1; i<=n; ++i)
	{
		if(n%i ==0)
		{
			cout<<i<<endl;
		}
	}
	return 0;
}
