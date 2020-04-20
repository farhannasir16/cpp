#include <iostream>  
using namespace std; 
 
int main()  
{  
int a[10], n, i;  
  
   cout<<"Enter the number to convert: ";    
   cin>>n;    
   
  for(i=0; n>0; i++)    // after every iteration a0=0, a1=1 ,a2=0 ,a3=1
    {    
      a[i]=n%2;    
       n= n/2;  
   }     

   cout<<"Binary of the given number= ";    
   
   for(i=i-1 ;i>=0 ;i--)    
    {    
        cout<<a[i];    
      }   
	  
	  return 0; 
}  
