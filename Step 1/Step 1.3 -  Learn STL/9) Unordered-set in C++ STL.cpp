#include <bits/stdc++.h>
using namespace std;


/*

-> An unordered set in STL is a container that stores unique elements in no particular order. Every operation on an unordered set takes O(1) complexity in the average case and takes O(n) in the worst case.

Syntax: unordered_set<object_type> variable_name;

-> Most used functions : 

1) insert() – to insert an element in the unordered set.

unordered_set<int> s;
s.insert(1);
s.insert(2);


2) begin() – return an iterator pointing to the first element in the unordered set.

s.begin();


3) end() – returns an iterator to the theoretical element after the last element.

s.end();


4) count() – it returns 1 if the element is present in the container otherwise 0.

unordered_set<int> s;
s.insert(1);
s.insert(2);
s.count(2); //returns true


5) clear() – deletes all the elements in unordered set.

s.clear();


6) find() – to search an element in the unordered set.

unordered_set<int> s;
s.insert(1);
s.insert(2);
if(s.find(2)!=s.end())
cout<<"true"<<endl;


7) erase() – to delete a single element or elements between a particular range.

s.erase();


8) size() – returns the size of the unordered set.

s.size();


9) empty() – to check if the unordered set is empty or not.

s.empty();

*/
 
int main() 
{
    unordered_set < int > s;
    for (int i = 1; i <= 10; i++) {
        s.insert(i);
    }

    cout << "Elements present in the unordered set: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << * it << " ";
    }
    cout << endl;

    for (auto it : s) {
        cout << it << " ";
    }
    cout << endl;


    int n = 2;
    if (s.find(2) != s.end())
        cout << n << " is present in unordered set" << endl;

    s.erase(s.begin());
    cout << "Elements after deleting the first element: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << * it << " ";
    }
    cout << endl;

    cout << "The size of the unordered set is: " << s.size() << endl;

    if (s.empty() == false)
        cout << "The unordered set is not empty " << endl;
    else
        cout << "The unordered set is empty" << endl;
        
    s.clear();
    cout << "Size of the unordered set after clearing all the elements: " << s.size();
}