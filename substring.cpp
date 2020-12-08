#include<iostream>
#include<cstring>

using namespace std;
int main()
{
     char s1[100]="Programming";
     char s2[100]="w";
     if(strstr(s1,s2)!=NULL)
     cout<<strstr(s1,s2)<<endl;
     
     else
     cout<<"not found"<<endl;
    return 0;
}