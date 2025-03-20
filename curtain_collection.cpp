#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int n;
    cin>>n;
    int max=0,count=0;
    for(int i=0;i<str.length();i++)
    {
        if(i%n==0)
        {
            max = std::max(count,max);
            count=0;
        }
        if(str[i]=='a')
            count++;
    }
    max = std::max(count,max);
    cout<<max<<endl;
    return 0;
}