#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int k;
    k = (1 << (int)log2(n) + 1) - 1;
    cout << (n ^ k);
    cout << endl;
}