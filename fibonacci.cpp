#include<iostream>
using namespace std;
int main()
{
  int x;
  cout<<"Enter the size of series:";
  cin>>x;
  int a[x];
  a[0]=0;
  a[1]=1;
  for(int i=2;i<x;i++)
  {
    a[i]=a[i-1]+a[i-2];
  }
  cout<<"Fibonacci series of size "<<x<<" is\n";
  for(int i=0;i<x;i++)
  {
    cout<<a[i]<<" ";
  }
}
