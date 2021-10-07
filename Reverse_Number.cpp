#include <iostream>
using namespace std;

int reverse_number(int n)
{
    int temp=-1;
    
    while(n>0)
    {
        int last_digit=n%10;
        if(temp==-1)
        {
            temp=last_digit;
        }
        else
        {
        temp=temp*10+last_digit;
        }
        
        n=n/10;
    }
    return temp;
}


int main() {
	int T;
	cin>>T;
	//input the number of test cases to be executed.
	
	for(int i=1;i<=T;i++)
	{
	    int n;
	    cin>>n;
	    
	    //input the number whoose reverse is  required
	    cout<<reverse_number(n)<<endl;
	}
}