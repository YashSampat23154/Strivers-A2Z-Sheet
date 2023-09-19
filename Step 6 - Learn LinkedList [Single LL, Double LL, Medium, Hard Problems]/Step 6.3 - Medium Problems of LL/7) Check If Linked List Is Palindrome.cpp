// https://www.codingninjas.com/studio/problems/check-if-linked-list-is-palindrome_985248?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

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

bool isPalindrome(Node *head)
{
    Node *newListHead = NULL; 
    Node *iter = head; 
    
    while(iter != NULL){
        Node* newNode = new Node(iter->data); 
        newNode->next = newListHead;
        newListHead = newNode; 
        iter = iter->next; 
    }

    Node* iter1 = head, *iter2 = newListHead; 

    while(iter1 != NULL){
        if(iter1->data != iter2->data) return false; 
        iter1 = iter1->next; 
        iter2 = iter2->next; 
    }

    return true;
}