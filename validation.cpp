#include<iostream>
using namespace std;
int main()
{
	int a,b;
	float c;

	cout<<"enter two number:-";
	cin>>a>>b;

	if(b==0)
	{
		cout<<"Division by zero"<<endl;
	}
	else{
		c=a/b;
		cout<<c<<endl;
	}
}