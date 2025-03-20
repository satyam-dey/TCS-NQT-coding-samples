#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char ch;
    cout << "Enter the first letter to select main menu: ";
    cin >> ch;
    string c[3] = {"Esptempso Coffee", "Cappuccino Coffee", "Latte Coffee"};

    string t[8] = {"Plain Tea", "Assam Tea", "Ginger Tea", "Cardamom Tea", "Masala Tea", "Lemon Tea", "Green Tea", "Organic Darjeeling Tea"};

    string s[4] = {"Hot and Sour Soup", "Veg Corn Soup", "Tomato Soup", "Spicy Tomato Soup"};

    string b[3] = {"Hot Chocolate Drink", "Badam Drink", "Badam-Pista Drink"};

    string temp = "";

    cout << "Enter the sub menu number: ";
    cin >> n;

    if (ch == 'c' and n <= 3)
        temp = c[n - 1];

    else if (ch == 't' and n <= 8)
        temp = t[n - 1];

    else if (ch == 's' and n <= 4)
        temp = s[n - 1];

    else if (ch == 'b' and n <= 3)
        temp = b[n - 1];

    else
        temp = "Invalid Input";

    if (temp != "Invalid Input")
        cout << "Welcome to CCD!\nEnjoy your " << temp <<"!\n";

    else
        cout << temp;

    return 0;
}