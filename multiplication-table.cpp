#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int n,i,a;
	cout<<"enter a number:-";
	cin>>n;
	for(int i=1;i>=10;i++){
		cout<<n<<"x"<<i<<"="<<i*n;
		cout<<endl;
	}
	return 0;
}
