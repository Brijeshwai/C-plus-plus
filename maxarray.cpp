#include<iostream>

using namespace std;

int main()
{
	int A[7]={4,3,6,5,9,1,2};
	int n=7,max;
	max=A[0];
	for(int i=1;i<7;i++)
	{
		if(A[i]>max)
		{
			max=A[i];
		}
	}
	cout<<"maximum number is "<<max<<endl;
	return 0;
}