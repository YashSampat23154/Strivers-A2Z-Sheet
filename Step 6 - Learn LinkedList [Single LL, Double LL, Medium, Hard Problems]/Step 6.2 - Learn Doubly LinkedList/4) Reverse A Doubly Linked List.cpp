// https://www.codingninjas.com/studio/problems/reverse-a-doubly-linked-list_1116098?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next,*prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};

*/

Node* reverseDLL(Node* head)
{   
    if(head->next == NULL) return head; 

    Node *prev, *curr, *forward; 
    prev = NULL; 
    curr = head; 
    forward = head->next;     

    while(forward != NULL){
        curr->next = prev; 
        if(prev != NULL)
            prev->prev = curr; 

        prev = curr; 
        curr = forward;
        if(forward != NULL)
            forward = forward->next;
    } 
    curr->next = prev; 
    prev->prev = curr;
    curr->prev = NULL; 

    head = curr; 
    return head; 
}

