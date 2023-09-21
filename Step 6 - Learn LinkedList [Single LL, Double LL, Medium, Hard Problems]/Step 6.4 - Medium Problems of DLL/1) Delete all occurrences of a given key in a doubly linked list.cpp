// https://www.codingninjas.com/studio/problems/delete-all-occurrences-of-a-given-key-in-a-doubly-linked-list_8160461?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

/**
 * Definition of doubly linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this->data = data;
 *          this->prev = prev;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node * deleteAllOccurrences(Node* head, int k) {

    if(head == NULL || (head->next == NULL && head->data == k)) return NULL; 

    Node *prev = NULL, *curr = head, *forward = head->next;

    while(forward != NULL){
        if(curr->data == k){
            if(prev != NULL)
                prev->next = forward;
            forward->prev = prev;

            if(curr == head)
                head = forward; 

            curr->prev = NULL; 
            curr->next = NULL; 

            curr = forward; 
            forward = forward->next;  
        }
        else{
            prev = curr; 
            curr = forward; 
            forward = forward->next; 
        }
    } 
    if(curr->data == k){
        if(prev != NULL)
            prev->next = forward;
        
        if(curr == head)
                head = forward;

        curr->prev = NULL; 
        curr->next = NULL; 
    }

    return head; 
}
