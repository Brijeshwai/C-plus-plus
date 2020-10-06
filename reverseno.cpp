#include <iostream>
#include<math.h>

using namespace std;


int main()
{
  
  int m,n, rev=0;
    
cout<<"enter a number:-";
 
   cin>>n;
   
 m=n;
 
   while(n>0){
     
   m=n%10;
    
    n=n/10;
     
   rev=rev*10+m;
  
  }
   
 cout<<rev<<endl;
   
 return 0;

}
