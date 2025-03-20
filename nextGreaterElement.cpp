#include <iostream>
using namespace std;

void nge(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j]){
                arr[i] = arr[j];
                break;
            }
            else if (arr[i] == arr[j])
            {
                arr[i] = arr[j];
                break;
            }
        }
    }
    cout << endl
         << "The NGE array: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int i, n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Take the integer array" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "arr" << i << "= ";
        cin >> arr[i];
    }
    cout << "The array: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    n = sizeof(arr) / sizeof(arr[0]);
    nge(arr, n);
    return 0;
}