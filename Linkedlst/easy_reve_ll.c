#include<stdio.h>
#include<stdlib.h>
 
/* Link list node */
struct node
{
    int data;
    struct node* next;
} *head;
void reverse(struct node *p){
	if(p->next==NULL){
		head=p;
		return;
	}
	reverse(p->next);
	struct node *q=p->next;
	q->next=p;
	p->next=NULL;

}
/* Function to push a node */
void push( int new_data)
{
    /* allocate node */
    struct node* new_node =
            (struct node*) malloc(sizeof(struct node));
            
    /* put in the data  */
    new_node->data  = new_data;
                
    /* link the old list off the new node */
    new_node->next = head;    
        
    /* move the head to point to the new node */
    head    = new_node;
}
/* Function to print linked list */
void printList()
{
    struct node *temp = head;
    while(temp != NULL)
    {
        printf("%d  ", temp->data);    
        temp = temp->next;  
    }
    printf("\n");
}
int main()
{
    /* Start with the empty list */
     head = NULL;
   
     push( 20);
     push( 4);
     push( 15); 
     push( 85);      
     
     printf("Given linked list\n");
     printList();    
     reverse(head);
     printList();
}
