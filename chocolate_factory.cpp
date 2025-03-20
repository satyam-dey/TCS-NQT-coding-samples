#include <iostream>
using namespace std;

int main()
{
    int N, i;
    cout << "Enter the number of integer: ";
    cin >> N;
    int arr[N];
    cout << "Enter the values of array a: " << endl;
    for (i = 0; i < N; i++)
    {
        cout << "arr[" << i << "]= ";
        cin >> arr[i];
    }

    int flag = 0;
    for (i = 0; i < N; i++)
    {
        int temp = 0;
        if (arr[i] != 0)
        {
            temp = arr[i];
            arr[i] = arr[flag]; // swap(arr[i],arr[flag]);
            arr[flag] = temp;
            flag++;
            cout << arr[i] << " ";
        }
    }
    cout<<endl;
    for (i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    return 0;
}