#include <iostream>
#include <vector>
// Random Access, Fast, Insertion-Deletion Fast, Insertion at the end fast
using namespace std;

template <class T> // Template class for make 'T' as any variable type
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Ways to create a vector
    vector<int> v1;     // zero length integer vector
    vector<char> v2(4); // 4-element character vector
    v2.push_back('lol');
    vector<char> v3(v2);  // 4-element character vector from v2
    vector<int> v4(6, 4); // 6 element vector of 3s

    int element, size;
    cout << "Enter the size of your vector" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector: ";
        cin >> element;
        v1.push_back(element); // Add element end of the vector
    }
    v1.pop_back(); // Pop out the last element in th vector
    display(v1);
    vector<int>::iterator iter = v1.begin(); // point the iter in the vector
    // v1.insert(iter,566);
    // v1.insert(iter,5,566); how many copy you want
    display(v1);
    display(v2);
    display(v3);
    cout << v3.size();
    display(v4);
    return 0;
}

// Use for C++ vectors
// https://cplusplus.com/reference/vector/vector/?kw=vector