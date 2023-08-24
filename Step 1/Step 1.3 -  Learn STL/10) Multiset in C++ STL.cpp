#include <bits/stdc++.h>
using namespace std;


/*

-> A multiset in STL is an associative container just like a set the only difference is it can store duplicate elements in it.

Syntax: multiset<object_type> variable_name;

-> Most used functions : 

1) insert() – to insert an element in the multiset.

multiset<int> s;
s.insert(1);
s.insert(2);


2) begin() – return an iterator pointing to the first element in the multiset.

s.begin();


3) end() – returns an iterator to the theoretical element after the last element.

s.end();


4) count() – gives the count of a particular element in the multiset.

multiset<int> s;
s.insert(1);
s.insert(2);
s.count(2); //returns 1


5) clear() – deletes all the elements in the multiset.

s.clear();


6) find() – to search an element in the multiset.

multiset<int> s;
s.insert(1);
s.insert(2);
if(s.find(2)!=s.end())
cout<<"true"<<endl;


7) erase() – to delete all the occurances of the element specified or just a single address. 

s.erase();


8) size() – returns the size of the multiset.

s.size();


9) empty() – to check if the multiset is empty or not.

s.empty();

*/
 
int main() 
{
    multiset < int > s;
    for (int i = 1; i <= 10; i++) {
        s.insert(i);
    }
    
    s.insert(5);
    cout << "Elements present in the multiset: ";
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
        cout << n << " is present in multiset" << endl;

    s.erase(s.begin());
    cout << "Elements after deleting the first element: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << * it << " ";
    }
    cout << endl;

    cout << "The size of the multiset is: " << s.size() << endl;

    if (s.empty() == false)
        cout << "The multiset is not empty " << endl;
    else
        cout << "The multiset is empty" << endl;
    
    s.clear();
    cout << "Size of the multiset after clearing all the elements: " << s.size();
}