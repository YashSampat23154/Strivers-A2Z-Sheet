// https://www.codingninjas.com/studio/problems/find-length-of-loop_8160455?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 * };
 *
 *************************************************************************/

int lengthOfLoop(Node *head) {
     Node *slow = head, *fast = head; 

    bool checkCycle = false; 

    while(fast != NULL){
        slow = slow->next; 
        fast = fast->next; 
        if(fast != NULL)
            fast = fast->next; 
        else return 0; 

        if(slow == fast){
            checkCycle = true; 
            break;
        }
    }

    if(!checkCycle)
        return 0; 

    int count = 1; 
    fast = fast->next;  

    while(slow != fast){
        fast = fast->next;
        count++; 
    }

    return count;
}
