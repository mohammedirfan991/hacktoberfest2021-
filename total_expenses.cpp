#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int quantity;
        float price;
        cin>>quantity>>price;
        float total=quantity*price;
        if(quantity>1000){
            total = total-(total*.1);
        }
        cout<<fixed<<setprecision(6)<<total<<endl;
    }
    return 0;
}