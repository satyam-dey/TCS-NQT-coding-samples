#include<iostream>
using namespace std;
int main()
{
    int row;
    cin>>row;
    for(int i=1;i<=row;i++)
    {
       
        for(int j=row-1;j>=i;j--)
        cout<<" ";
        for(int j=1;j<=i;j++)
        cout<<"*";
        
        cout<<endl;
    }
    /*for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=row;j++)
        {
            if(i+j>=row)
            cout<<"*";
            else
            cout<<" ";
        }
    }*/
}