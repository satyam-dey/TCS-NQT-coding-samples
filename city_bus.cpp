#include <bits/stdc++.h>
using namespace std;

double getFare(string s, string d)
{
    double fare = 0.0;
    vector route = {"TH", "GA", "IC", "HA", "TE", "LU", "NI", "CA"};
    vector fares = {800, 600, 750, 900, 1400, 1200, 1100, 1500};

    auto source_iter = find(route.begin(), route.end(), s);
    auto destination_iter = find(route.begin(), route.end(), d);

    // find(start, end, value) is a standard algorithm from the <algorithm> library that searches for value in the given range [start, end).
    // If source is found, source_iter will point to its position in the vector.
    // If destination is found, destination_iter will point to its position in the vector.
    // If a station is not found, find() returns route.end(), which is one position past the last element.

    if (source_iter == route.end() || destination_iter == route.end())
    {
        cout << "Invalid Input" << endl;
        return 0.0;
    }

    int source_index = distance(route.begin(), source_iter);
    int destination_index = distance(route.begin(), destination_iter);

    // distance() function
    //     distance(start, position) returns the number of elements between start and position,effectively giving the index of position in the vector.
    // Here, route.begin() is the first element of the route vector.
    // source_iter and destination_iter are iterators pointing to the respective station positions.

    // If source comes before destination in the route
    if (source_index < destination_index) {
        for (int i = source_index; i <= destination_index; i++) {
            fare += fares[i];
        }
    }
    // If destination comes before source in the route
    else if (destination_index < source_index) {
        for (int i = source_index + 1; i < route.size(); i++) {
            fare += fares[i];
        }
        for (int i = 0; i <= destination_index; i++) {
            fare += fares[i];
        }
    }

    return ceil(fare*0.005); // ceil() function is used to round up to the nearest integer
}

int main()
{
    string s, d;
    cout << "Enter the Source stop: ";
    cin >> s;
    cout << "Enter the Destination stop: ";
    cin >> d;
    if (getFare(s, d) == 0)
        cout << "INVALID INPUT" << endl;
    else
        cout << getFare(s, d) << ".0 INR" << endl;
    return 0;
}