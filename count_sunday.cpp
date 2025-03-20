#include <iostream>
#include <map>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cout << "Enter the day to be started: ";
    cin >> s;
    int n, ans = 0;
    cout << "Enter the number of days from start of the month: ";
    cin >> n;

    unordered_map<string, int> m;
    // After how many days sunday will come
    m["mon"] = 6;
    m["tue"] = 5;
    m["wed"] = 4;
    m["thu"] = 3;
    m["fri"] = 2;
    m["sat"] = 1;
    m["sun"] = 0;

    if (n - m[s.substr(0, 3)] >= 1)  // checks at least 1 sunday in the given range
        ans = 1 + (n - m[s.substr(0, 3)]) / 7; // main calculation equation
        // 1+(total_days-first_sunday_day)/7
    cout << ans;
    cout << endl;
}