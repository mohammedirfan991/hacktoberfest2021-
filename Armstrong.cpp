#include <iostream>  
using namespace std;

int main()
{  
    int i,r,sum,temp,arr[20],t;
    cin>>t;
    
    for(i=0;i<t;i++)
    {cin>>arr[i];}
    
    for(i=0;i<t;i++)
    {   temp=arr[i];
        sum=0;
        while(arr[i]>0)    
        {    
            r=arr[i]%10;    
            sum=sum+(r*r*r);    
            arr[i]=arr[i]/10;    
        }
        
        if(temp==sum)    
        {cout<<"Armstrong"<<endl;}   
        else{cout<<"Not Armstrong"<<endl;}
    }
    return 0;  
}  