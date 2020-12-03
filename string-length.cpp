#include<iostream>
#include<cstring>

using namespace std;
int main()
{
    char *s;
    
    cout<<"enter a string ";
    cin.getline(s,500);
    
    cout<<"length "<<strlen(s)<<endl;
    
    return 0;
}
