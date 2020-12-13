#include<iostream>
#include <math.h>
#include<stdio>

using namespace std;

int main()
{
	int hour;
	cout<<"enter hour";
	cin>>hour;
	if(hour>=9 && hour<=18)
	{
		cout<<"working"<<endl;
	}
	else{
		cout<<"leisure";
	}
	return 0;
}
