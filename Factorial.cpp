#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    
    return n*(n-1);
}
int main() {
	int T;
	cin>>T;
	
	//input how many test case are required.
	
	for(int i=1;i<=T;i++)
	{
	    int A;
	    cin>>A;
	    
	    cout<<factorial(A)<<endl;
	}
	
}