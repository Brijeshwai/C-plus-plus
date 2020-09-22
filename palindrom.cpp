#include <iostream>


using namespace std;


int main()
{
 
   int m,n,r,rev=0;
 
   cout<<"enter a number:-";
  
  cin>>n;
  
  r=n;
  
  while(n>0){
     
   m=n%10;
     
   n=n/10;
      
  rev=rev*10+m;
 
   }
   
 cout<<rev<<endl;
  
  if(r==rev){
     
   cout<<"it is palindrom number "<<endl;
       
 
    }
       
 else 
        
cout<<"not palindrom number"<<endl;
    
  
  return 0;

}
