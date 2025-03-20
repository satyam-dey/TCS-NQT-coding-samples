#include <iostream>

using namespace std;

// __builtin_popcount(n) directly returns the number of 1s in the binary representation of n.

int countSetBits(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout <<"No of set bits are "<< countSetBits(num) << endl;
    return 0;
}