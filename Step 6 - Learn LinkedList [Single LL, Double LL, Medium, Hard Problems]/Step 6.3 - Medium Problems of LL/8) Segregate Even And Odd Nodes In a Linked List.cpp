// https://www.codingninjas.com/studio/problems/segregate-even-and-odd-nodes-in-a-linked-list_1116100?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 *		Node() : data(0), next(nullptr) {};
 *		Node(int x) : data(x), next(nullptr) {}
 *		Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node* segregateEvenOdd(Node* head)
{
    Node *evenHead = new Node();
    Node *oddHead = new Node();

    Node *evenIter = evenHead; 
    Node *oddIter = oddHead;

    Node *iter = head; 

    while(iter != NULL){
        if(iter->data % 2 == 0){
            evenIter->next = iter; 
            evenIter = evenIter->next; 
        }
        else{
            oddIter->next = iter; 
            oddIter = oddIter->next; 
        }
        iter = iter->next; 
    } 
    oddIter->next = NULL; 

    evenHead = evenHead->next; 
    oddHead = oddHead->next; 

    if(evenHead)
        evenIter->next = oddHead; 
    else
        evenHead = oddHead;

    return evenHead; 
}
