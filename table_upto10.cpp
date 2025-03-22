#include<iostream>
using namespace std;
int main()
{   
    
    int x,y;
    cout<<"Enter The Number : ";

    cin>>y;
    for(int i=1;i<=10;i++)
    {
        x=i*y ;
        cout<<y<<"*"<<i<<"="<<x<<endl;
    }
    return 0;
}