// https://www.codingninjas.com/studio/problems/-intersection-of-two-linked-lists_630457?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

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


int findLength(Node *head){
    int length = 0; 
    Node *temp = head; 

    while(temp != NULL){
        length++; 
        temp = temp->next; 
    }

    return length; 
}

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    int len1 = findLength(firstHead);
    int len2 = findLength(secondHead);

    if(len1 < len2) return findIntersection(secondHead, firstHead); 

    int diff = len1-len2; 
    
    Node *firstItr = firstHead; 
    Node *secondItr = secondHead; 

    while(diff--)
        firstItr = firstItr->next; 

    while(firstItr != NULL){
        if(firstItr == secondItr) return firstItr; 
        firstItr = firstItr->next; 
        secondItr = secondItr->next; 
    }

    return NULL; 
}
