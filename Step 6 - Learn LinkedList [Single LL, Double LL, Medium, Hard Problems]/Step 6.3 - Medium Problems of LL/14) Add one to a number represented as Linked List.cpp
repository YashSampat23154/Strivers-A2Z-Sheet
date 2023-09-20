// https://www.codingninjas.com/studio/problems/add-one-to-a-number-represented-as-linked-list_920557?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node * reverse(Node *head){
    if(head == NULL || head->next == NULL) return head; 

    Node *prev = NULL;
    Node *curr = head;
    Node *forward = head->next;

    while(forward != NULL){
        curr->next = prev; 
        prev = curr; 
        curr = forward; 
        forward = forward->next; 
    }
    curr->next = prev; 

    return curr; 
}

Node *addOne(Node *head)
{
    Node *reverseHead = reverse(head); 

    Node* reverseItr = reverseHead; 
    Node* reverseItrprev = reverseItr;

    int carry = 1; 

    while(reverseItr != NULL){
        reverseItr->data += carry; 
        carry = reverseItr->data/10;
        reverseItr->data = reverseItr->data%10;

        if(carry == 0)
            break; 

        reverseItrprev = reverseItr;
        reverseItr = reverseItr->next; 
    }

    if(carry)
        reverseItrprev->next = new Node(1); 

    return reverse(reverseHead); 

}
