#include <iostream>
using namespace std;


int find_remainder(int a,int b)
{
    return a%b;
}


int main() {
	
	int T;
	//input the number of test cases.
	cin>>T;
	
	for(int i=1;i<=T;i++)
	{
	    //input the two number for finding the remainder
	    int A;
	    int B;
	    cin>>A>>B;
	    
	    cout<<find_remainder(A,B)<<endl;
	}
	
}