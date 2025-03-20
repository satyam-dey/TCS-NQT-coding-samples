#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> age;
    int m, fees = 0;

    for (int i = 0; i < 20; i++)
    {
        try
        {
            cin >> m;
            // If input is empty or breaks early, exit loop
            if (cin.fail())
            {
                break;
            }

            // Check if the age is within the valid range
            if (m >= 0 && m < 120)
            {
                age.push_back(m);
            }
            else
            {
                cout << "INVALID INPUT" << endl;
                return 0; // Exit if invalid input is found
            }
        }
        catch (const exception &e)
        {
            cout << "INVALID INPUT" << endl;
            return 0; // Exit on error
        }
    }

    // Calculate the total fees based on the age ranges
    for (int i : age)
    {
        if (i < 17)
        {
            fees += 200;
        }
        else if (i < 40)
        {
            fees += 400;
        }
        else
        {
            fees += 300;
        }
    }

    // Output the total fees
    cout << "Total Income " << fees << " INR" << endl;

    return 0;
}