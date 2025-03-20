#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w;
    cout << "Enter the weight of clothes: ";
    cin >> w;
    if (w == 0)
        cout << "Time Estimated: " << 0 << " minutes" << endl;
    else if (w > 0 && w <= 2000)
        cout << "Time Estimated: " << 25 << " minutes" << endl;
    else if (w >= 2001 && w <= 4000)
        cout << "Time Estimated: " << 35 << " minutes" << endl;
    else if (w > 4000 && w <= 7000)
        cout << "Time Estimated: " << 45 << " minutes" << endl;
    else if (w > 7000)
        cout << "OVERLOADED" << endl;
    else
        cout << "INVALID INPUT" << endl;

    return 0;
}