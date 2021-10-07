// C program to check whether a number
// is Palindrome or not.

#include <iostream>
using namespace std;

/* Iterative function to reverse digits of num*/
int reverseDigits(int num)
{
	int rev_num = 0;
	while (num > 0) {
		rev_num = rev_num * 10 + num % 10;
		num = num / 10;
	}
	return rev_num;
}

/* Function to check if n is Palindrome*/
int isPalindrome(int n)
{

	// get the reverse of n
	int rev_n = reverseDigits(n);

	// Check if rev_n and n are same or not.
	if (rev_n == n)
		return 1;
	else
		return 0;
}

/*Driver program to test reversDigits*/
int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        if(isPalindrome(n))
        cout<<"Pallindrome number"<<endl;
        else
        cout<<"Not a Pallindrome number"<<endl;
    }
	

	
	return 0;
}
