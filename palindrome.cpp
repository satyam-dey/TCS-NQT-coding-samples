#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s)
{
    int l = 0, r = s.length() - 1;
    while (l < r)
    {
        if (s[l] != s[r])
            return false;
        l++, r--;
    }
    return true;
}

int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;
    cout << (isPalindrome(str) ? "Yes, it is a palindrome string." : "No, it is not a palindrome string.") << endl;
}