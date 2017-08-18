#include <iostream>
#include <string>
using namespace std;

int main()
{
  int i,j,n,c=0;
  char a[10000];
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  
  for(i=0;i<n;i++)
  {  
      if(a[i]=='H')
      {
          c++;
      for(j=i+1;j<n;j++)
      {
       if(a[j]=='T')
       {
        i=j-1;
        c--;
        break;   
       }   
      }
      
    }
  }
    if(c==0)
    {
     cout<<"valid";   
    }
    else
    cout<<"invalid";
      
}
