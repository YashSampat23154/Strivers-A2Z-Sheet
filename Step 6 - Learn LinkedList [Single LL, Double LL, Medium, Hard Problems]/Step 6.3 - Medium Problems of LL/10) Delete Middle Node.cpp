// https://www.codingninjas.com/studio/problems/delete-middle-node_763267?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* deleteMiddle(Node* head){
    if(head->next == NULL) return NULL; 

    Node *prev = head, *slow = head, *fast = head;

    while(fast != NULL && fast->next != NULL){
        prev = slow;
        slow = slow->next; 
        fast = fast->next->next; 
    }

    prev->next = slow->next; 
    free(slow); 

    return head; 
}
