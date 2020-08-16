#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int a,b,c;
	cout<<"enter 3 no.";
	cin>>a>>b>>c;

	if (a>b && a>c)
	{
		cout<<"a is greater";
	}
	else if(b>c){
		cout<<"b is greater";
	}
	else{
		cout<<"c is greater";
	}
	return 0;
}