#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t!=0)
  {
    int a;
    cin>>a;
    int rem,sum=0;
    while(a!=0)
    {
      rem=a%10;
      sum+=rem;
      a=a/10;
    }
    t--;
    cout<<"Sum of digits: "<<sum<<endl;
  }
  
}
