#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int a = 0, b = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '#')
            a++;
        else if (str[i] == '*')
            b++;
    }
    cout << b - a << endl;

    return 0;
}