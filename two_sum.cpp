#include<iostream>

using namespace std;

void findTwoNumbers(int arr[],int target){
    int n = sizeof(arr);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++)
        {
            if((arr[i]+arr[j])==target)
                cout<<"The two numbers are "<<arr[i]<<" + "<<arr[j]<<" = "<<target<<endl;
            // else
            // {
            //     cout<<"No pair found"<<endl;
            //     break;
            // }
        }
    }
}

int main(){
    int i,n,target;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the target sum= ";
    cin>>target;
    cout<<"Take the integer array"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"a"<<i<<"= ";
        cin>>arr[i];
    }
    findTwoNumbers(arr,target);
    return 0;
}