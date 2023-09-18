// https://www.codingninjas.com/studio/problems/reverse-linked-list_920513?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

/****************************************************************

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
        

*****************************************************************/

Node* reverseLinkedListHelper(Node *prev, Node *curr){
    if(curr == NULL) return prev; 

    Node *forward = curr->next; 
    curr->next = prev; 
    prev = curr; 
    curr = forward; 

    return reverseLinkedListHelper(prev, curr); 
}

Node* reverseLinkedList(Node *head)
{    
    return reverseLinkedListHelper(NULL, head);
}
