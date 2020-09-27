#include<iostream>

using namespace std;

int main()
{
	int A[10],n=10;
	int key;
	cout<<"Enter number:-";
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	cout<<"Enter key:-";
	cin>>key;
	for(int i=0;i<n;i++)
	{
		if(key==A[i])
		{
			cout<<"found at "<<i<<endl;

		}
	}
		cout<<"Not Found";
	return 0;
}