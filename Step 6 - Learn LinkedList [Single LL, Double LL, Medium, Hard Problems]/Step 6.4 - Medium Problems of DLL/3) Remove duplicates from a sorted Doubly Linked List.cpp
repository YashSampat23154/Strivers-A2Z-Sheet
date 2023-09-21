// https://www.codingninjas.com/studio/problems/remove-duplicates-from-a-sorted-doubly-linked-list_2420283?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

/**
 * Definition of doubly linked list:
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

Node * removeDuplicates(Node *head)
{
    if(head->next == NULL) return head; 

    Node *prev = head, *curr = head->next, *forward = curr->next; 

    while(forward != NULL){
        if(curr->data == prev->data){
            prev->next = forward; 
            forward->prev = prev;

            curr->next = NULL; 
            curr->prev = NULL; 

            curr = forward; 
            forward = curr->next; 
        }
        else{
            prev = curr; 
            curr = forward; 
            forward = forward->next; 
        }
    }
    if(curr->data == prev->data){
        prev->next = NULL; 
        curr->next = NULL; 
        curr->prev = NULL; 
    }
    
    return head; 
}
