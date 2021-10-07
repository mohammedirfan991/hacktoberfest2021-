#include<iostream>

using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int num;
        cin>>num;
        if(num&1)
        cout<<"Odd\n";
        else
        cout<<"Even\n";
    }
return 0;
}