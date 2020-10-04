#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int x1,x2,y1,y2;
	float dist;
	cout<<"enter the points";
	cin>>x1>>x2>>y1>>y2;
	dist=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
		cout<<"Distance between two points are::"<<endl<<dist<<endl;
	return 0;	
}
