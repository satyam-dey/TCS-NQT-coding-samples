#include <iostream>

using namespace std;

void subarraySum(int arr[], int n, int target)
{
    int left = 0, sum = 0;
    for (int right = 0; right < n; right++)
    {
        sum += arr[right];
        while (sum > target)
        {
            sum -= arr[left++];
        }
        if (sum == target)
        {
            cout << "Subarray found from index " << left << " to " << right << endl;
            return;
        }
    }
    cout << "No subarray found" << endl;
}

int main()
{
    int i, n, target;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the target sum= ";
    cin >> target;
    cout << "Take the integer array" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "a" << i << "= ";
        cin >> arr[i];
    }
    n = sizeof(arr) / sizeof(arr[0]);
    subarraySum(arr,n,target);
    return 0;
}