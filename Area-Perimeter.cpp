#include<bits/stdc++.h>
using namespace std;

int main(){
    int length;
    int breadth;
    cin>>length;
    cin>>breadth;
    int area = length*breadth;
    int peri = 2*(length+breadth);

    if(area>peri){
        cout<<"Area"<<endl<<area;
    }
    else if(area<peri){
        cout<<"Peri"<<endl<<peri;
    }
    else{
        cout<<"Eq";
    }
}