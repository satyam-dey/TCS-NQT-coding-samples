#include<iostream>
using namespace std;

int main()
{
    int a, b = 0, c;
    cout<<"Enter a number : ";
    cin>>a;
    while (a != 0) 
    {
        c = a % 10;   //for the last digit
        b = b * 10 + c;   //reverse process
        a = a / 10;   //to take the number without last
    }
    cout<<b;
    return 0;
}