#include <bits/stdc++.h>
using namespace std;


/*

-> Vectors in STL are basically dynamic arrays that have the ability to change size whenever elements are added or deleted from them.
-> Vector elements can be easily accessed and traversed using iterators. 
-> A vector stores elements in contiguous memory locations.

Syntax: vector<object_type> variable_name;

-> Most used functions : 

1) begin() – it returns an iterator pointing to the first element of the vector.

auto iterator = itr;
itr = v1.begin();


2) end() – it returns an iterator pointing to the element theoretically after the last element of the vector.

auto iterator = itr;
itr = v1.end();


3) push_back() – it accepts a parameter and insert the element passed in the parameter in the vectors, the element is inserted at the end.

vector<int> v1;
v1.push_back(1);


4) insert() – it is used to insert an element at a specified position.

auto it= v1.begin();
v1.insert(it,5); //inserting 5 at the beginning


5) erase() – it is used to delete a specific element

vector<int> v1;
auto it= v1.begin();
v1.erase(it);// erasing the first element


6) pop_back() – it deletes the last element and returns it to the calling function.

v1.pop_back();


7) front() – it returns a reference to the first element of the vector.

v1.front();


8) back() – it returns a reference to the last element of the vector.

v1.back();


9) clear() – deletes all the elements from the vector.

v1.clear();


10) empty() – to check if the vector is empty or not.

v1.empty();


11) size() – returns the size of the vector

v1.size();

*/
 
int main() {
  
    vector < int > v;

    for (int i = 0; i < 10; i++) {
      v.push_back(i); //inserting elements in the vector
    }

    cout << "the elements in the vector: ";
    for (auto it = v.begin(); it != v.end(); it++)
      cout << * it << " ";

    // In for each we auto will point to elements and not to their location. 
    for (auto it : v)
      cout << it << " ";

    cout << "\nThe front element of the vector: " << v.front();
    cout << "\nThe last element of the vector: " << v.back();
    cout << "\nThe size of the vector: " << v.size();
    cout << "\nDeleting element from the end: " << v[v.size() - 1];
    v.pop_back();

    cout << "\nPrinting the vector after removing the last element:" << endl;
    for (int i = 0; i < v.size(); i++)
      cout << v[i] << " ";

    cout << "\nInserting 5 at the beginning:" << endl;
    v.insert(v.begin(), 5);
    cout << "The first element is: " << v[0] << endl;
    cout << "Erasing the first element" << endl;
    v.erase(v.begin());
    cout << "Now the first element is: " << v[0] << endl;

    if (v.empty())
      cout << "\nvector is empty";
    else
      cout << "\nvector is not empty" << endl;

    v.clear();
    cout << "Size of the vector after clearing the vector: " << v.size() << endl;

    vector<int> v1 = {1, 2, 3}; 
    vector<int> v2(v1); 

    cout << "the elements in the vector: ";
    for (auto it = v2.begin(); it != v2.end(); it++)
    cout << * it << " ";

}