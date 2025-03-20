#include <iostream>

using namespace std;

// Recursive Approach
int fibonacci(int n) 
{
    if(n<=1)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

// Dynamic Approach

void fibonacciDP(int n)
{
    int fib[n];
    if(n<=1)
        return;
    fib[0]=0,fib[1]=1;
    cout<<fib[0]<<" "<<fib[1]<<" ";
    for(int i=2;i<n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
        cout<<fib[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int i,num;
    cout << "Enter the number upto get the series: ";
    cin >> num;
    for(i=0;i<num;i++)
        cout<<fibonacci(i)<<" ";
    cout<<endl;
    fibonacciDP(num);
}