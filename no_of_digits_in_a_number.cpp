#include<iostream>
using namespace std;

int main()
{
    int a,b,z=0;
    cout<<"Enter the number : ";
    cin>>a;
    while(a>0)
    {
        b=a%10;
        z++;
        a=a/10;
       
        cout<<b<<endl;
    }

    cout<<"No of the digits in a Number : "<<z;
    return 0;
}