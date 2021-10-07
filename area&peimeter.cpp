#include <iostream>
using namespace std;

int Rectangle_Area(int l,int h)
{
    return l*h;
}
int Rectangle_perimeter(int l,int h)
{
    return (2*(l+h));
}
int main() {
	int T,l,h;
	cin>>T; // Entered Input 
	
	for(int i=1;i<=T;i++)
	{
	    cin>>l>>h;
	    cout<<Rectangle_Area(l,h)<<endl;
        cout<<Rectangle_perimeter(l,h)<<endl;

        if (Rectangle_Area(l,h) == Rectangle_perimeter(l,h))
        {
            cout<<"Your Area and perimerter are same "<<endl;
        }
        else if (Rectangle_Area(l,h) > Rectangle_perimeter(l,h))
        {
            cout<<"Your Area is Greater from the Perimeter "<<endl;
        }
        else if (Rectangle_Area(l,h) < Rectangle_perimeter(l,h))
        {
             cout<<"Your Perimeter is Greater from the Area "<<endl;
        }
	}
	return 0;
}
