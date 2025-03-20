#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = 1;
    cout << "Enter the marked price: ";
    cin >> n;
    while (n > 0)
    {
        if ((n % 10) == 0)
            continue;
        else
            ans *= (n % 10);
        n /= 10;
    }

    cout << ans << endl;

    return 0;
}