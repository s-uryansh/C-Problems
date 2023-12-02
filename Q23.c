#include<stdio.h>
#include<stdlib.h>

struct Node{

	int data;
	struct Node*next;
	};
	
struct Node*createNode(int data){

	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	
	newNode -> data = data;
	newNode -> next = NULL;
	
	return newNode;
	}
	
void insertNode(struct Node** head , int data){

	struct Node* newNode = createNode(data);
	
	if(*head == NULL){
		*head = newNode;
		}else{
			struct Node*temp = *head;
			
			while(temp-> next != NULL){
				temp = temp->next;
			}
			temp -> next= newNode;
		}
	}
	
void deleteNode(struct Node** head , int data){
	
	struct Node* temp= *head;
	struct Node* prev = NULL;
	
	if(temp != NULL && temp -> data == data){
		*head = temp->next;
		free(temp);
		return ;
		}	
	
	while(temp != NULL && temp -> data!=data){
		prev = temp;
		temp = temp->next;
		}
	
	if(temp == NULL) return;
		prev -> next = temp-> next;
		free(temp);
	}
		
		
int isEmpty(struct Node* head){

	return head == NULL;
	}
	
void printList( struct Node* head){
	
	struct Node* temp = head;
	while(temp!= NULL){
	
		printf("%d -> " , temp->data);
		temp = temp-> next;
	}
	printf("NULL\n");
}

int main(){

	struct Node* head= NULL;
	
	insertNode(&head , 1);	
	insertNode(&head , 2);	
	insertNode(&head , 3);	
	insertNode(&head , 4);	
	insertNode(&head , 5);	
	insertNode(&head , 6);
	insertNode(&head , 7);
	
	
	printList(head);
	
	deleteNode(&head , 4);
	deleteNode(&head , 2);
	deleteNode(&head , 1);
	
	printf("is the list empty ? %s\n" , isEmpty(head)?"yes" : "no");
	
	printList(head);
	
	deleteNode(&head , 3);
	
	deleteNode(&head , 5);
	
	deleteNode(&head , 6);
	printList(head);
	
	
	return 0;
	
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
