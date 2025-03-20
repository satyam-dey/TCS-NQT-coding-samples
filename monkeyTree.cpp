#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, p, k, j;
    cout << "Enter the number of total monkeys: ";
    cin >> n;
    cout << "Enter the Number of eatable Bananas by Single Monkey: ";
    cin >> k;
    cout << "Enter the Number of eatable Peanuts by single Monkey: ";
    cin >> j;
    cout << "Enter the number of total Bananas: ";
    cin >> m;
    cout << "Enter the number of total Peanuts: ";
    cin >> p;
    int x, y, r, s, tm = 0;
    if (n < 0 or k < 0 or j < 0 or m < 0 or p < 0)
    {
        cout << "INVALID INPUT";
    }
    else
    {
        x = m / k; // no of monkeys eaten bananas
        y = p / j; // no of monkeys eaten peanuts
        r = m % k; // no of remain bananas
        s = p % j; // no of remain peanuts
        tm = n - (x + y);  // no of remain monkeys
        if (r != 0 || s != 0)
            tm--;  // if remain peanuts and bananas are not zero then reduce 1 from remain monkeys

        cout << "Number of Monkeys left on the tree: " << tm << endl;
    }
    return 0;
}