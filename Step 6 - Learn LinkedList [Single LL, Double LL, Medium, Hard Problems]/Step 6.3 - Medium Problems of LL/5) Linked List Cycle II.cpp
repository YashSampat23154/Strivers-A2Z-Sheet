// https://www.codingninjas.com/studio/problems/linked-list-cycle-ii_1112628?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

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

Node *firstNode(Node *head)
{
    Node *slow = head, *fast = head; 

    bool checkCycle = false; 

    while(fast != NULL){
        slow = slow->next; 
        fast = fast->next; 
        if(fast != NULL)
            fast = fast->next; 
        else return NULL; 

        if(slow == fast){
            checkCycle = true; 
            break;
        }
    }

    if(!checkCycle)
        return NULL; 
    
    slow = head; 

    while(slow != fast){
        slow = slow->next; 
        fast = fast->next; 
    }

    return slow; 
}