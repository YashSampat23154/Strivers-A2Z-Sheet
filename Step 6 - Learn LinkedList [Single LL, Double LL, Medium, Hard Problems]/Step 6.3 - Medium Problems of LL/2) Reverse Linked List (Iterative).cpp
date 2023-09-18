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

Node* reverseLinkedList(Node *head)
{
    if(head->next == NULL) return head; 

    Node *prev = NULL, *curr = head, *forward = head->next; 

    while(forward!=NULL){
        curr->next = prev; 
        prev = curr; 
        curr = forward; 
        forward = forward->next; 
    }
    curr->next = prev; 
    return curr;
}
