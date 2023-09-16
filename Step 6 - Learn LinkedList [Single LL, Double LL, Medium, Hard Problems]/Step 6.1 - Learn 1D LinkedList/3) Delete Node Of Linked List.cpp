// https://www.codingninjas.com/studio/problems/delete-node-of-linked-list_8160463?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *deleteLast(Node *list){
    if(list->next == NULL) return NULL; 

    Node *temp = list; 

    while(temp->next->next != NULL)
        temp = temp->next; 
    
    Node *todelete = temp->next; 
    temp->next = NULL; 
    free(todelete); 

    return list; 
}