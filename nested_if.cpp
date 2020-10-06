#include<iostream>
#include <math.h>

using namespace std;

int main(){
	
	int a,b,c,d,r1,r2;
	cout<<"enter a,b,c";
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if(d==0){
		cout<<endl<<"discriminant is real";
		cout<<"d=2pow(b)-4ac";
	}
	else if(d>0){
		cout<<endl<<"roots are real annd unequal";
		cout<<endl<<r1=-b+sqrt(b)/2*a*c;
		cout<<endl<<r2=-b-sqrt(b)/2*a*c;
		cout<<endl<<"r1"<<" "<<"r2";
	}
	else{
		cout<<"imaginary";
	}
	return 0;
}
