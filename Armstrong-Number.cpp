#include<bits/stdc++.h>
#include<iostream>
#include<string>
#define ll long long int
#define ull unsigned long long int
#define boost ios::sync_with_stdio(false); cin.tie(0)
#define mod 100000007
using namespace std;

int main(){
   boost;
int t;
cin>>t;
while(t--){
int n;
int sum=0;
int r;
cin>>n;
int temp = n;
do
{
r = n % 10;
sum = sum + (r * r * r);
n = n / 10;
} 
while(n > 0);
if(temp == sum)
cout << "Armstrong" << endl;
else
cout << "Not Armstrong" << endl;
}
}
