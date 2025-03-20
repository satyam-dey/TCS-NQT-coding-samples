#include <iostream>
#include <list>
using namespace std;

template <class T> // Template class for make 'T' as any variable type
void display(list<T> &l)
{
    list<T>::iterator it;
    for (it = l.begin(); it!= l.end(); it++)
    {
        cout << *it<< " ";
    }
    cout << endl;
}

int main()
{

    list<int> l1; // list of 0 length
    int element;
    for (int i = 0; i < 7; i++)
    {
        cout << "Enter an element to add to this list: ";
        cin >> element;
        l1.push_back(element); // Add l1.remove()element end of the list
    }
    // Sorting the list
    l1.sort();

    display(l1);
    l1.pop_back();
    l1.pop_front();
    display(l1);
    
    list<int> l2(7); // empty list of size 7
    list<int>::iterator iter;
    iter= l2.begin();
    *iter= 45;
    iter++;
    *iter= 46;
    iter++;
    *iter= 47;
    iter++;
    *iter= 48;
    iter++;
    l1.remove(47); // delete a particular value from the list
    display(l2);

    l1.merge(l2); // merging l1 and l2
    display(l1);

    // reversing list
    l1.reverse();

    return 0;
}