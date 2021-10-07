#include <iostream>
using namespace std;

int Remainder_number(int x,int y,int z)
{
	if (((x>y) && (y>z)))
	{
		cout<<"The second highest value is"<<y<<endl;
	}
	else if (((y>x) && (x>z)))
	{
		cout<<"The second highest value is"<<x<<endl;
	}
	else if (((x>z) && (z>y)))
	{
		cout<<"The second highest value is"<<z<<endl;
	}	
	return false;
}
int main() {
	int T,A,B,C;
	cin>>T; // Entered Input

	for(int i=1;i<=T;i++)
	{
	    cin>>A>>B>>C;
	    cout<<Remainder_number(A,B,C)<<endl;
	}
	return 0;
}
