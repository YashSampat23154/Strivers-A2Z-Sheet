// https://www.codingninjas.com/studio/problems/clone-a-linked-list-with-random-pointers_983604?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *random;
 *		Node() : data(0), next(nullptr), random(nullptr){};
 *		Node(int x) : data(x), next(nullptr), random(nullptr) {}
 *		Node(int x, Node *next, Node *random) : data(x), next(next), random(random) {}
 * };
 */

Node *cloneLL(Node *head){
	if(head == NULL) return NULL; 

	Node* itr = head; 

	while(itr != NULL){
		Node* temp = new Node(itr->data);
		temp->next = itr->next; 
		itr->next = temp; 
		itr = itr->next->next; 
	}

	itr = head; 

	while(itr != NULL){
		if(itr->random != NULL)
			itr->next->random = itr->random->next; 
		itr = itr->next->next;
	}

	Node* result = new Node(0); 
	Node* resultItr = result; 
	itr = head;

	while(itr != NULL){
		resultItr->next = itr->next; 
		resultItr = resultItr->next; 
		itr->next = itr->next->next; 
		itr = itr->next; 
	}

	return result->next; 
}