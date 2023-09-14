#include <bits/stdc++.h>
using namespace std;


/*

-> A queue is a linear list of elements in which deletions can take place only at one end called the front, and insertions can take place only at the end called the rear.
-> The queue is a First In First Out type of data structure (FIFO), the terms FRONT and REAR are used in describing a linear list only when it is implemented as a queue.

Syntax: queue<object_type> variable_name;  

-> Most used functions : 

1) push() – to insert an element in the queue.

queue<int> q
q.push(110);
q.push(220);


2) pop() – deletes the first element of the queue.

q.pop();


3) front() – returns a reference to the first element of the queue.

q.front();


4) back() – returns a reference to the last element of the queue.

q.back();


5) emplace() – to insert an element in the queue.

queue<int> q;
q.emplace(1);
q.emplace(2);


6) size() – returns the number of elements on the queue.

q.size();


7) empty() – to check if the queue is empty or not.

q.empty();

*/
 
void printqueue(queue<int> q1)
{
    queue<int> q2=q1;
    while(!q2.empty())
    {
        cout<<q2.front()<<"\n";
        q2.pop();
    }
}


int main()
{
    queue<int> q;
    for(int i=1;i<=5;i++)
    q.push(i);
    
    cout<<"The elements of the queue are:"<<endl;
    printqueue(q);
    
    cout<<"The size of the queue: "<<q.size()<<endl;
    cout<<"The front element of the queue: "<<q.front()<<endl;
    cout<<"The last element of the queue: "<<q.back()<<endl;
    cout<<"Pop the front element: "<<endl;
    
    q.pop();
    printqueue(q);
}