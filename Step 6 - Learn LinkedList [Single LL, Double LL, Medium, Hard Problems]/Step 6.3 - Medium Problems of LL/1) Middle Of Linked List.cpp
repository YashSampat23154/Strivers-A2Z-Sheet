// https://www.codingninjas.com/studio/problems/middle-of-linked-list_973250?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

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

Node *findMiddle(Node *head) {
    if(head->next == NULL) return head; 

    Node *curr = head, *forward = head->next; 

    while(forward != NULL){
        curr = curr->next; 
        forward = forward->next; 
        if(forward != NULL)
            forward = forward->next; 
    }

    return curr; 
}

