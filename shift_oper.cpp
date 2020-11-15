//left shift(<<) operator and right shift(>>) operator

#include<iostream>
#include<math.h>

int main(int argc, char const *argv[])
{
	char x=20,y;
	y=x>>1;//using right shift it will divide the value by 2.
	//y=x<<1; using left shift it will multiply the value by 2(i).
	//y=~x; using of not operator.
	cout<<(int)y<<endl;
	return 0;
}
