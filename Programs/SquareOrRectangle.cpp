#include <iostream>

using namespace std;

int main()
{   int l,b;
    cout<<"enter length";
    cin>>l;
    cout<<"enter breadth";
    cin>>b;
    if(l==b)
    {
        cout<<"Given Figure is a square";
    }
    else
        cout<<"Given Figure is a rectangle";
    return 0;
}
