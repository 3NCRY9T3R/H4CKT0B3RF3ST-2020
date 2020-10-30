// C++ program to find a middle element in a linked list.
#include<bits/stdc++.h> 
using namespace std; 

                      
struct Node 
{ 
	int data; 
	struct Node* next; 
}; 

                                          // Function to get the middle of the linked list 
void printMiddle(struct Node *head) 
{ 
	struct Node *slow_ptr = head; 
	struct Node *fast_ptr = head; 

	if (head!=NULL) 
	{ 
		while (fast_ptr != NULL && fast_ptr->next != NULL) 
		{ 
			fast_ptr = fast_ptr->next->next; 
			slow_ptr = slow_ptr->next; 
		} 
		printf("The middle element is [%d]\n\n", slow_ptr->data); 
	} 
} 

                                                
                                                // Function to add a new node
void push(struct Node** head_ref, int new_data) 
{ 
	
	struct Node* new_node = new Node;    // assigning a new node

	
	new_node->data = new_data;        // storing in the data

	
	new_node->next = (*head_ref); 

	
	(*head_ref) = new_node; 
} 

                                            // A function to print a given linked list 
void printList(struct Node *ptr) 
{ 
	while (ptr != NULL) 
	{ 
		printf("%d->", ptr->data); 
		ptr = ptr->next; 
	} 
	printf("NULL\n"); 
} 

                                       // Driver Code to check the same
int main() 
{ 
	                                          // Start with the empty list 
	struct Node* head = NULL; 
	
	                                          // Iterate and add element 
	for (int i=5; i>0; i--) 
	{ 
		push(&head, i); 
		printList(head); 
		printMiddle(head); 
	} 

	return 0; 
} 
