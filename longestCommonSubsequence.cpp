#include <iostream>
#include <string>

using namespace std;

int lcs(string s1, string s2)
{
    int m = s1.size(), n = s2.size();
}

int main()
{
    string str1;
    cout << "Enter the string1: ";
    cin >> str1;
    string str2;
    cout << "Enter the string2: ";
    cin >> str2;
    cout << lcs(str1, str2) << endl;
    return 0;
}