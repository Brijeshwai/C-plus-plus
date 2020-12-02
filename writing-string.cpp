#include <iostream>

using namespace std;

int main()
{
   char s[100];
   char s2[100];
   
   cout<<"enter your name"<<endl;
   cin.get(s,100);
   cout<<"welcome "<<s<<endl;

cin.ignore();
    cout<<"enter your name"<<endl;
   cin.get(s2,100);
   cout<<"welcome "<<s2<<endl;
   
    return 0;
}