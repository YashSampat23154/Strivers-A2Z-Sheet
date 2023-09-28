// https://www.codingninjas.com/studio/problems/rotate-linked-list_920454?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

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

Node *rotate(Node *head, int k) {

     if(head == NULL || head->next == NULL) return head; 
     
     int length = getLength(head); 

     k = k%length;
     k = length-k; 

     Node* tail = head; 
     Node* curr; 

     int count = 0; 

     while(tail->next != NULL){
          count++; 
          if(count == k)
               curr = tail; 
          tail = tail->next;
     }

     tail->next = head; 
     head = curr->next; 
     curr->next = NULL;  

     return head; 
}