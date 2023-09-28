// https://www.codingninjas.com/studio/problems/reverse-list-in-k-groups_983644?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

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

int getLength(Node* head){
    if(head == NULL) return 0;

    int count = 0; 

    while(head != NULL){
        count++; 
        head = head->next; 
    }

    return count; 
}

Node* kReverse(Node* head, int k) {

    if(head == NULL) return head;

    int length = getLength(head);

    if(length < k) return head; 
 
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = head->next; 
    int count = 0; 

    while(count<k){
        curr->next = prev; 

        prev = curr; 
        curr = forward;
        if(forward) 
            forward = forward->next; 

        count++; 
    } 

    head->next = kReverse(curr, k);

    return prev; 
}