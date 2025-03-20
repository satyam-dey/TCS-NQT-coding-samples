#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> age;
    int fees = 0;
    string temp;
    cout << "Enter the age of the patients: " << endl;
    for (int i = 0; i < 20; i++)
    {
        getline(cin,temp);
        if (temp.empty())
            break;

        int num = stoi(temp);
        if (num > 0 && num < 17)
        {
            fees += 200;
            age.push_back(num);
        }
        else if (num >= 17 && num < 40)
        {
            fees += 400;
            age.push_back(num);
        }
        else if (num >= 40 && num < 120)
        {
            fees += 300;
            age.push_back(num);
        }
        else
            cout << "INVALID INPUT";
        num = 0;
    }
    cout << "Total Income: " << fees << " INR" << endl;

    return 0;
}