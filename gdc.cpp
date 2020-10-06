#include <iostream>
#include<math.h>

using namespace std;

int main()
{
   
 int m,n;

    cout<<"enter two number:-";
 
   cin>>n>>m;
   
 while(m!=n){
 
         if(m>n)
  
     m=m-n;
  
      else if(n>m);
   
  n=n-m;
  
  }
  
  cout<<m<<" "<<endl;
  
  return 0;

}
