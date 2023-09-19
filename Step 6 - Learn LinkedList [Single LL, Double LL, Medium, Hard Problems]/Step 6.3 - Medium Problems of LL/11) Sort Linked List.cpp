// https://www.codingninjas.com/studio/problems/sort-linked-list_625193?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

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

Node* reverseLL(Node *head){
    if(head == NULL || head->next == NULL) return head; 

    Node *prev = NULL, *curr = head, *forward = head->next; 

    while(forward != NULL){
        curr->next = prev; 
        prev = curr; 
        curr = forward; 
        forward = forward->next; 
    }

    curr->next = prev; 

    return curr; 

}

Node* sortList(Node* head){
    if(head->next == NULL) return head; 

    Node *evenHead = new Node(); 
    Node *oddHead = new Node(); 

    Node *evenItr = evenHead; 
    Node *oddItr = oddHead; 
    Node *itr = head; 

    bool turn = true; 

    while(itr != NULL){
        if(turn){
            evenItr->next = itr; 
            evenItr = evenItr->next; 
        }
        else{
            oddItr->next = itr; 
            oddItr = oddItr->next;
        }
        itr = itr->next; 
        turn = !turn; 
    }
    evenItr->next = NULL; 
    oddItr->next = NULL; 

    evenHead = evenHead->next; 
    oddHead = reverseLL(oddHead->next); 

    Node *sortHead = new Node(); 
    Node *sortItr = sortHead;
    evenItr = evenHead; 
    oddItr = oddHead; 

    while(evenItr != NULL && oddItr != NULL){
        if(evenItr->data < oddItr->data){
            sortItr->next = evenItr; 
            evenItr = evenItr->next; 
        }
        else{
            sortItr->next = oddItr; 
            oddItr = oddItr->next; 
        }
        sortItr = sortItr->next;
    }

    if(evenItr != NULL)
        sortItr->next = evenItr; 
    else 
        sortItr->next = oddItr; 

    return sortHead->next; 
}
