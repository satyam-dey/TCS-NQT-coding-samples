#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter the number : ";
    cin>>n;
    for(i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}