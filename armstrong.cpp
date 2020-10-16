#include<iostream>
#include<math.h>
 
using namespace std;

 int main()
 {
   
  int m,n,sum=0;
     
  
   cout<<"enter a number:-";   

  cin>>n;
    
 m=n;
     
while(n>0)
   
  {
        
 m=n%10;
     
    n=n/10;
    
     sum=sum+m*m*m;
  
   }
   
  if(sum==m)
{
       
  cout<<"armstrong number"<<endl;
  
   }
 
    else
     cout<<"not armstong number"<<endl;
  
   return 0;
 }
