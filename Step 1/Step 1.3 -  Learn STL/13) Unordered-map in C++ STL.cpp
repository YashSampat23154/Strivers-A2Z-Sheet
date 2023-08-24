#include <bits/stdc++.h>
using namespace std;


/*

-> Unordered_map in STL are associative containers where each element consists of a key value and a mapped value.
-> Two mapped values cannot have the same key value. The elements can be in any order.

Syntax: unordered_map<object_type,object_type> variable_name;

-> Most used functions : 

1) insert() – to insert an element in the map.

unordered_map<int,int> mp;
mp.insert({1,10});
mp.insert({2,20});


2) begin() – return an iterator pointing to the first element in the map.

mp.begin();


3) end() – returns an iterator to the theoretical element after the last element.

mp.end();


4) clear() – deletes all the elements in the map.

mp.clear();


5) find() – to search for an element in the map.

unordered_map<int,int> mp;
mp.insert({1,10});
mp.insert({2,20});
if(mp.find(2)!=mp.end())
cout<<"true"<<endl;


6) erase() – to delete a single element or elements between a particular range.

mp.erase(key);
mp.erase(iterator position);
mp.erase(iterator position 1, iterator position 2);


7) size() – returns the number of elements on the map.

mp.size();


8) empty() – to check if the map is empty or not.

mp.empty();

*/

int main()
{
    unordered_map < int, int > mp;
    for (int i = 1; i <= 5; i++) {
        mp.insert({ i , i * 10});
    }

    cout << "Elements present in the map: " << endl;
    cout << "Key\tElement" << endl;
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it -> first << "\t" << it -> second << endl;
    }

    for (auto it : mp) {
        cout << it.first << "\t" << it.second << endl;
    }

    int n = 2;
    if (mp.find(2) != mp.end())
        cout << n << " is present in map" << endl;

    mp.erase(mp.begin());
    cout << "Elements after deleting the first element: " << endl;
    cout << "Key\tElement" << endl;
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it -> first << "\t" << it -> second << endl;
    }

    cout << "The size of the map is: " << mp.size() << endl;

    if (mp.empty() == false)
        cout << "The map is not empty " << endl;
    else
        cout << "The map is empty" << endl;
    
    mp.clear();
    cout << "Size of the set after clearing all the elements: " << mp.size();
}