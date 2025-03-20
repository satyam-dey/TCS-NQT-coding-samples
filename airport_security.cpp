#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cout << "Enter the number of risk: ";
    cin >> N;
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    // for (int i = 0; i < N; i++)
    //     for (int j = 0; j < N - i - 1; j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //             swap(arr[j], arr[j + 1]);
    //     }
    // time complexcity is n^2

    int l=0,m=0,h=N-1;
    while(m<=h){
        if(arr[m]==0)
            swap(arr[l++],arr[m++]);
        else if(arr[m]==1)
            m++;
        else
            swap(arr[m],arr[h--]);
    }

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
}