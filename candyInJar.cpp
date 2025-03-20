#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 10, k = 5;
    int num;
    cout << "Enter the candy number one customer can order at a time: ";
    cin >> num;
    if (num < n && num <= k && num >= 1)
    {
        cout << "NUMBER OF CANDIES SOLD: " << num << endl;
        cout << "NUMBER OF CANDIES LEFT: " << n - num << endl;
    }
    else
    {
        cout << "INVALID INPUT" << endl;
        cout << "NUMBER OF CANDIES LEFT: " << n << endl;
    }
    return 0;
}