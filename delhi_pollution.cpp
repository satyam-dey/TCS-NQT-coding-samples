#include <bits/stdc++.h>
using namespace std;

bool isEven(int n){
    return (n%2==0);
}

int main() {
    int n,d,x;
    cout<<"Enter the number of vehicles: ";
    cin>>n;
    int a[n];
    cout<<"Enter the last digits of vehicle numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<<"Enter the date: ";
    cin>>d;
    cout<<"Enter the value of fine for each vehicle: ";
    cin>>x;
    int even=0,odd=0;
    for (int i = 0; i < n; i++)
    {
        if(isEven(a[i])==true)
            even++;
        else
            odd++;
    }
    if(isEven(d)==true)
        cout<<odd*x<<endl;
    else
        cout<<even*x<<endl;

    return 0;
}