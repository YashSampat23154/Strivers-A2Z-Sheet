// https://www.codingninjas.com/studio/problems/delete-kth-node-from-end_799912?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

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

Node* removeKthNode(Node* head, int K)
{
    Node *forward = head; 

    while(K--)
        forward = forward->next; 

    if(forward == NULL)
        return head->next; 

    Node *prev = head, *curr = head; 

    while(forward != NULL){
        prev = curr; 
        curr = curr->next; 
        forward = forward->next; 
    }

    prev->next = curr->next; 
    free(curr); 

    return head; 
}
