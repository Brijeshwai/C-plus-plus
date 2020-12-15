#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int r,c,i,j;
	for(r=1;r<=10;r++)
	{
		for(c=1;c<=r;c++)
		{
			cout<<"* ";
	    }
			cout<<"\n";
	}
	return 0;
}
