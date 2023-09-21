// https://www.codingninjas.com/studio/problems/find-pairs-with-given-sum-in-doubly-linked-list_1164172?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

/**
 * Definition of doubly linked list:
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this -> data = data;
 *          this -> prev = prev;
 *          this -> next = next;
 *      }
 * };
 *
 *************************************************************************/

vector<pair<int, int>> findPairs(Node* head, int k)
{
    vector<pair<int,int>> ans; 

    Node *tail = head; 
    while(tail->next != NULL)
        tail = tail->next; 

    while(head!=tail && head->data <= tail->data){
        if(head->data + tail->data == k){
            ans.push_back({head->data, tail->data});
            head = head->next; 
            tail = tail->prev; 
        }
        else if(head->data + tail->data < k)
            head = head->next; 
        else 
            tail = tail->prev; 
    }

    return ans; 
}
