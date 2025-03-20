#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,count=0;
    cout << "Enter the size of the array: ";
    cin >> N;
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++){
        if(arr[i]<arr[i+1])
            count++;
    }

    cout<<count<<endl;

}