#include<bits/stdc++.h>
using namespace std;

int main(){
    int r,c,temp=0,sum=0,rn=0;
    cout<<"Enter the number of rows: ";
    cin>>r;
    cout<<"Enter the number of columns: ";
    cin>>c;

    int a[r][c];

    cout<<"Enter the parking status for each index:"<<endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<"a"<<i+1<<j+1<<"= ";
            cin>>a[i][j];
            sum+=a[i][j]; // calculate the sum of each row
        }
        if(sum>temp){
            temp=sum; // store the calculated sum in another variable
            rn=i+1; // though array starts from index no 0, we have to do +1 to get the row number
        }
        sum=0;
    }

    cout<<"Row no "<<rn<<" has maximum number if 1's."<<endl;

    return 0;
}