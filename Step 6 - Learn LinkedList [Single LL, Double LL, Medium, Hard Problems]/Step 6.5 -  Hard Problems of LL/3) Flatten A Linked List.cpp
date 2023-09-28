// https://www.codingninjas.com/studio/problems/flatten-a-linked-list_1112655?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */

Node* flattenLinkedList(Node* head) 
{
	if(head->next == NULL)
		return head; 

	Node* newList = flattenLinkedList(head->next); 
	head->next = NULL; 
	
	Node* result = new Node(0); 
	Node* resultItr = result; 

	while(head != NULL && newList != NULL){
		if(head->data < newList->data){
			resultItr->child = head; 
			resultItr = resultItr->child; 
			head = head->child; 
		}
		else{
			resultItr->child = newList; 
			resultItr = resultItr->child; 
			newList = newList->child; 
		}
	}

	if(head != NULL)
		resultItr->child = head; 
	else
		resultItr->child = newList; 
		
	return result->child; 

}
