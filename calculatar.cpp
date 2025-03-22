#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    char choice;
    float a,b,c;
    cout<<"Enter the 1st number : ";
    cin>>a;
    cout<<"Enter the 2nd number : ";
    cin>>b;
    cout<<"Enter choice : ";
    //fflush (stdin);
    cin>>choice;
    switch (choice)
    {
        case '+':
            c=a+b;
            cout<<a<<" "<<"+"<<" "<<b<<" "<<"="<<" "<<c;
            break;
        case '-':
            c=a-b;
            cout<<a<<" "<<"-"<<" "<<b<<" "<<"="<<" "<<c;
            break;
        case '*':
            c=a*b;
            cout<<a<<" "<<"*"<<" "<<b<<" "<<"="<<" "<<c;
            break;
        case '/':
            c=a/b;
            if (b==0)
                cout<<"syntax error";
            else
                cout<<a<<" "<<"/"<<" "<<b<<" "<<"="<<" "<<c;
            break;
        default:
        cout<<"choice error";
    }
    return 0;
}
