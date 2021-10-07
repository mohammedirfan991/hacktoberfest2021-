#include <iostream>
using namespace std;


int factorial(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1 )
    {
        return 1;
    }
    return n*factorial(n-1);
}

void special_number(int n)
{
    int sum=0;
    int a=n;
    while(n>0)
    {
        int last_digit=n%10;
        
        sum+=factorial(last_digit);
        
        n=n/10;
    }
    
    
    
    if(sum==a)
    {
        cout<<"special number";
    }
    else
    {
        cout<<"not a special number";
    }
}

int main() {
	int T;
	cin>>T;
	//input the number of test cases required
	
	for(int i=1;i<=T;i++)
	{
	    int n;
	    cin>>n;
	    //input the number to be tested.
	    
	    special_number(n);
	    cout<<endl;
	}
}