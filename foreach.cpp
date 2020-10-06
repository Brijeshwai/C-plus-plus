#include <iostream>
#include<math.h>

using namespace std;

int main()
{
	int A[]={2,4,6,9,11,13};
	for (int x:A)
		//for(int &x:A)
		//cout<<++x<<" ";
		//& this is called refrence it will change the storage increasing by one...
	cout<<x<<" ";
	return 0;
}
