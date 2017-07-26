#include <iostream>
#include <string>

using namespace std;

int main()
{
  int i,j,n,a[1000];
  cin>>n;
  for(i=0;i<n;i++)
  {
      cin>>a[i];
  }
  for(i=n-1;i>0;i--)
  {
      for(j=i-1;j>=0;j--)
      {
          if(a[i]==a[j])
          {
              cout<<a[j];
              break;
          }
      }
      break;
  }
}


