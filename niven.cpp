#include<bits/stdc++.h>

using namespace std;
 
string checkN(int n)
{
     
    
    string st = to_string(n);
     
    
    int sum = 0;

    int length = st.length();
 
    
    for(char i : st)
    {
         
        sum = sum + (i - '0');
    }
     

    if (n % sum == 0)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}
 

int main()
{
    int number;
     cin>>number;
    
    cout << checkN(number) << endl;
}
