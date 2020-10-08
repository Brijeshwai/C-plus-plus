#include<iostream>
#include<math.h>

using namespace std;

int main(){

	int m1,m2,m3,total;
	float average;
	cout<<"enter the marks";
	cin>>m1>>m2>>m3;
	total=m1+m2+m3;
	average=total/3;

	if(average>=60)
		cout<<"A"<<endl;

	else if(average>=35)
		cout<<"B"<<endl;

		else
			cout<<"C"<<endl;
		return 0;
	
}
