#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int y,z=0,n,r,sum=0,temp,w,x;
    cout<<"Enter the number = ";
    cin>>n;
    w=n;
    temp=n;     //to check the two numbers are equal or not
    while(n>0) 
    {
        y=n%10;
        z++;
        n=n/10;
    }   //for counting the number of digits in a number
        
    
    while(w>0)    
    {    
        r=w%10;    //for the last digit
        /*while(r<=z)
        {
            x=r*r;
        }*/
       // sum = sum + pow(r,z);  [line to be changed]
        w/=10;    //to take the number without last
        cout<<sum<<endl;   //for my checking
    }    
    if(temp==sum)    
    cout<<"Armstrong  Number ";    
    else    
    cout<<"not Armstrong Number";    
    return 0;  
}