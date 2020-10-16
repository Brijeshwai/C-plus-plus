#include<iostream>
#include <math.h>

using namespace std;

int main()
{
	int age;
	cout<<"enter age::";
	cin>>age;
	
	if(age<12 || age>50)
	{
		cout<<"Eligible"<<endl;
	}
	else{
		cout<<"Not Eligible";
	}
	return 0;
}
