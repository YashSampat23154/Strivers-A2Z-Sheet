// https://www.codingninjas.com/studio/problems/introduction-to-doubly-linked-list_8160413?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

/*
 * Definition for doubly-linked list.
 * class Node
 * {
 * public:
 *    int data;
 *    Node *next, *prev;
 *    Node() : data(0), next(nullptr), prev(nullptr) {}
 *    Node(int x) : data(x), next(nullptr), prev(nullptr) {}
 *    Node(int x, Node *next, Node *prev) : data(x), next(next), prev(prev) {}
 * };
 */

Node* constructDLL(vector<int>& arr) {
    Node *head = new Node(arr[0]); 

    Node *temp = head; 

    for(int i = 1; i<arr.size(); i++){
        Node *newNode = new Node(arr[i]);
        newNode->prev = temp; 
        temp->next = newNode; 
        temp = temp->next; 
    }

    return head; 
}
