#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<char> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    vector<int> lower(26, 0), upper(26, 0);
    
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 'A' && arr[i] <= 'Z') {
            upper[arr[i] - 'A']++;
        } else if (arr[i] >= 'a' && arr[i] <= 'z') {
            lower[arr[i] - 'a']++;
        }
    }
    
    bool flag = false;
    char ch = '\0';
    
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 'A' && arr[i] <= 'Z') {
            if (upper[arr[i] - 'A'] % 2 == 1) {
                ch = arr[i];
                flag = true;
                break;
            }
        } else if (arr[i] >= 'a' && arr[i] <= 'z') {
            if (lower[arr[i] - 'a'] % 2 == 1) {
                ch = arr[i];
                flag = true;
                break;
            }
        }
    }
    
    if (flag==true) {
        cout << ch << endl;
    } else {
        cout << "All are even" << endl;
    }
    
    return 0;
}
