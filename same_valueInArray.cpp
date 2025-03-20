#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0, flag = 0;
    cout << "Enter the size of array: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
                a[i]++;
            if (a[j] < 0)
                flag++;
        }

    for (int i = 0; i < n; i++)
        sum += a[i];
    if (flag != 0)
        cout << "Wrong Input" << endl;
    else
        cout << "Ans is " << sum << endl;

    return 0;
}