#include <bits/stdc++.h>
using namespace std;

int main()
{
    int iw, ew;
    cout << "Enter the number of Interior Wall: ";
    cin >> iw;
    cout << "Enter the number of Exterior Wall: ";
    cin >> ew;
    double iwA[iw], ewA[ew], cost = 0.0;

    cout << "Enter Surface Area of each Interior Wall: \n";
    for (int i = 0; i < iw; i++)
    {
        cin >> iwA[i];
        cost += (iwA[i] * 18);
    }
    cout << "Enter Surface Area of each Enterior Wall: \n";
    for (int i = 0; i < ew; i++)
    {
        cin >> ewA[i];
        cost += (ewA[i] * 12);
    }
    cout << "Total Estimated Cost: " << cost << " INR" << endl;
    return 0;
}