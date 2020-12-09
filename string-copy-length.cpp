#include<iostream>
#include<cstring>

using namespace std;
int main()
{
     char s1[100]="good";
     char s2[100]="";
     
     strncpy(s2,s1,3);
     
     cout<<s2<<endl;
    
    return 0;
}
