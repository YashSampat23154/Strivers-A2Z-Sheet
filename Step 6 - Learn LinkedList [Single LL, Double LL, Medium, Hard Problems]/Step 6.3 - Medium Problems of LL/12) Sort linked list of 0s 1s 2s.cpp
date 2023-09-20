// https://www.codingninjas.com/studio/problems/sort-linked-list-of-0s-1s-2s_1071937?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

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

Node* sortList(Node *head){

    if(head->next == NULL) return head; 

    Node *zeroHead = new Node();
    Node *oneHead = new Node();
    Node *twoHead = new Node();

    Node *zeroItr = zeroHead;
    Node *oneItr = oneHead;
    Node *twoItr = twoHead;

    Node *itr = head;

    while(itr != NULL){
        if(itr->data == 0){
            zeroItr->next = itr; 
            zeroItr = zeroItr->next; 
        }
        else if(itr->data == 1){
            oneItr->next = itr; 
            oneItr = oneItr->next;
        }
        else{
            twoItr->next = itr; 
            twoItr = twoItr->next;
        }
        itr = itr->next; 
    }

    twoItr->next = NULL; 
    oneItr->next = twoHead->next; 
    zeroItr->next = oneHead->next; 

    return zeroHead->next; 
}