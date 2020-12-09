#include<iostream>
#include<cstring>

using namespace std;
int main()
{
     char s1[100]="good ";
     char s2[100]="morning";
     
     strncat(s1,s2,5);
     
     cout<<s1<<endl;
    
    return 0;
}
