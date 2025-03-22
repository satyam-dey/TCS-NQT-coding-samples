#include<iostream>
using namespace std;

int main()    
{
    int n,r,sum=0,temp;    
    cout<<"Enter the number = ";    
    cin>>n;    
    temp=n;    //to check the two numbers are equal or not
    while(n>0)    
    {    
        r=n%10;    //for the last digit
        sum=(sum*10)+r;    //reverse process
        n=n/10;    //to take the number without last
    }    
    if(temp==sum)
    cout<<"Palindrome Number "<<endl;    
    else    
    cout<<"Not Palindrome Number "<<endl;   
    return 0;      
}                              