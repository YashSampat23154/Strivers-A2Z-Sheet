#include <bits/stdc++.h>
using namespace std;


/*
-> Pair is used to combine together two values that may be of different data types. 
-> Pair provides a way to store two heterogeneous objects as a single unit. It is basically used if we want to store tuples. 
-> The pair container is a simple container defined in <utility> header consisting of two data elements or objects. 

Syntax: pair <data_type1, data_type2> Pair_name


-> Most used functions : 

1) make_pair() - It makes it possible to create a value pair without explicitly writing the data types.

Syntax : pair1 = make_pair(data1, data2);


2) swap() - It swaps the contents of one pair object with the contents of another pair object. The pairs have to be of the same kind.

Syntax : pair1.swap(pair2)

*/

int main()
{ 
    pair<int, int> p1 = {1, 3}; 
    cout << p1.first << " " << p1.second << endl; 


    pair<int, pair<int, int>> p2 = {1, {3, 4}}; 
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl; 


    pair<int, int> arr[] = { {1, 2}, {2, 5}, {5, 1}}; 
    cout << arr[1].second << endl;


    pair < int, int > p3;
    p1 = make_pair(2, 4);

    p1.swap(p3);

    cout << p1.first << " " << p1.second << endl;
    cout << p3.first << " " << p3.second << endl;
    
    return 0;
}

