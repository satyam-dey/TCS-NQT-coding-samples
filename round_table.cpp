#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of members: ";
    cin >> n;
    int way = 1;
    for (int i = (n - 2); i > 0; i--)
    {
        way *= i;
    }
    cout<<way*2<<endl;
    return 0;
}