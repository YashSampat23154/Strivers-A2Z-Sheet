// https://www.codingninjas.com/studio/problems/add-two-numbers_1170520?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    Node *ans = new Node(); 
    Node *ansItr = ans; 
    Node *num1Itr = num1; 
    Node *num2Itr = num2;

    int sum = 0, carry = 0; 

    while(num1Itr != NULL && num2Itr != NULL){
        sum = num1Itr->data + num2Itr->data + carry; 
        carry = sum/10; 
        sum = sum%10; 

        ansItr->next = new Node(sum); 
        
        ansItr = ansItr->next; 
        num1Itr = num1Itr->next;  
        num2Itr = num2Itr->next; 
    }

    while(num1Itr != NULL){
        sum = num1Itr->data + carry; 
        carry = sum/10; 
        sum = sum%10; 

        ansItr->next = new Node(sum); 
        
        ansItr = ansItr->next; 
        num1Itr = num1Itr->next;
    }

    while(num2Itr != NULL){
        sum = num2Itr->data + carry; 
        carry = sum/10; 
        sum = sum%10; 

        ansItr->next = new Node(sum); 
        
        ansItr = ansItr->next; 
        num2Itr = num2Itr->next;
    }

    if(carry)
        ansItr->next = new Node(1); 

    return ans->next; 
}
