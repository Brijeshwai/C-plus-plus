#include <bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
	
	cout<<"menu\n";	
	cout<<"1.Add\n"<<"2.Sub\n"<<"3.Mul\n"<<"4.Div"<<endl;
	
	int choice;
	cout<<"Enter Your Choice"<<endl;
	cin>>choice;
		
	int n1,n2,sum;	
	cout<<"enter two number"<<endl;
	cin>>n1>>n2;
	
	switch(choice)
	{
		case 1:
		sum=n1+n2;
		cout<<"Addition\n"<<sum<<endl;
		break;
		
		case 2:
		sum=n1-n2;
		cout<<"Subtraction\n"<<sum<<endl;
		break;
		
		case 3:
		sum=n1*n2;
		cout<<"Multiplaction\n"<<sum<<endl;
		break;
		
		case 4:
		sum=n1/n2;
		cout<<"Division\n"<<sum<<endl;
		break;
			
		default:
			cout<<"Wrong Choice"<<endl;
	}
	return 0; 
}
