#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v, w;
    cout << "Enter the total number of vehicles: ";
    cin >> v;
    cout << "Enter the total number of wheels: ";
    cin >> w;
    int tw, fw;
    if((w>=2) && (w%2==0) && v<w){
        tw=(4*v-w)/2;
        fw=(w-2*v)/2; //v-tw

        cout<<"Number of two wheelers is "<<tw<<endl;
        cout<<"Number of four wheelers is "<<fw<<endl;
    }
    else
        cout<<"invalid input";

    return 0;
}