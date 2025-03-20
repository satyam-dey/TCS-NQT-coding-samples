#include <bits/stdc++.h>
using namespace std;

int main()
{
    string par;
    cout << "Enter the name of parent member: ";
    cin >> par;
    char x;
    cout << "Enter Y if  Parent member has child members otherwise enter N: ";
    cin >> x;
    if (x == 'N' or x == 'n')
    {
        cout << "Total Members: 1" << endl
             << "Comission Details" << endl
             << par << ": " << 250 << " INR" << endl;
    }
    else if (x == 'Y' or x == 'y')
    {
        vector<string> v;
        string children;
        cout << "Enter the name of the children in comma separated: ";
        cin >> children;
        string temp = ""; // a temporary string to store each child name

        for (int i = 0; i < children.length(); i++)
        {
            if (children[i] == ',')
                v.push_back(temp); // if there is found ',' add the temp string in the vector
            else if (children[i] != ' ')
                temp += children[i]; // if there is not found any space add each character of children in temp string
        }
        v.push_back(temp); // for the last name
        cout << "Total Members: " << v.size()+1<< endl; // +1 for the parent member add
        cout<<"Comission Details\n";
        cout<< par << ": " << 500*v.size() << " INR" << endl;
        for(auto a:v)
            cout<<a<<": 250 INR"<<endl;
        
    }

    return 0;
}