#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

bool isSingleDigit(int n)
{
    return (n >= 0 && n <= 9);
}

int main()
{
    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;
    if (r != 0)
    {
        int sum1, sum2;

        sum1 = r * (sumOfDigits(n));
        // cout<<sum1<<endl;

        sum2 = sumOfDigits(sum1);

        // while (isSingleDigit(sum2) == true)
        //     sum2=sumOfDigits(sum2);

        if (isSingleDigit(sum2) == true)
            cout << sum2 << endl;
        else
            sum2 = sumOfDigits(sum2);
    }
    else
        cout << 0<<endl;

    return 0;
}