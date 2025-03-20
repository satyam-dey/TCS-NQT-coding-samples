#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, max = 0, temp = 0;
    cout << "Enter the limited time: ";
    cin >> t;
    int e[t], l[t];
    cout << "Entry" << endl;
    for (int i = 0; i < t; i++)
    {
        cin >> e[i]; // entry
    }
    cout << "Leave" << endl;
    for (int i = 0; i < t; i++)
    {
        cin >> l[i]; // leave
    }

    for (int i = 0; i < t; i++)
    {
        max += e[i] - l[i]; // at that time present in the cruise is the max number of presence in the cruise
        if (max > temp)
            temp = max; // if nxt calculation is not more than the previous thn don't change the value of max
    }

    cout << "Maximum no of total guest is " << temp << endl;
    return 0;
}