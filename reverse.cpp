#include <iostream>

using namespace std;

int reverse(int n)
{
    int rev = 0;
    while (n)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main()
{
    int num;
    cout << "Enter the number to reverse: ";
    cin >> num;
    cout << "The reversed number is "<<reverse(num)<<endl;
}