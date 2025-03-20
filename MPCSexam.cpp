#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t[3][3];
    int avg[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Round " << i + 1 << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << "Oxygen value of trainee " << j + 1 << ": ";
            cin >> t[i][j];
        }
    }
    avg[0] = (t[0][0] + t[1][0] + t[2][0]) / 3;
    avg[1] = (t[0][1] + t[1][1] + t[2][1]) / 3;
    avg[2] = (t[0][2] + t[1][2] + t[2][2]) / 3;
    int max = 0;
    for (int i = 0; i < 3; i++)
        if (avg[i] > max)
            max = avg[i];
    for (int i = 0; i < 3; i++)
    {
        if (avg[i] < 70)
            cout << "Trainee " << i + 1 << " is unfit" << endl;
        if(avg[i]==max)
            cout << "Trainee Number: " << i + 1 << endl;
    }

    return 0;
}