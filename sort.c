#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};
void insert_begin(struct node **head,int x){
	struct node * tmp;
	tmp=malloc(sizeof(struct node));
	tmp->data=x;
	if(*head==NULL){
	  *head=tmp;
	  (*head)->next=NULL;
	}
	else {
	tmp->next=(*head);
	*head=tmp;
	}

}
void printlist(struct node *head){
	struct node *tmp=head;
        printf("\nhead: ");
	while(tmp){
	  printf("%d->",tmp->data);
	  tmp=tmp->next;
        }
	printf("\n");
}
void swap_nodes(struct node **head,struct node *prev,struct node *n,struct node *ntn){
 	struct node *hold=NULL;
	
	if(prev==NULL&& ntn){    //for swaping at head node and 1st node we give prev=NULL in this function;
	   n->next=ntn->next;
	   ntn->next=n;
	  (*head)=ntn;
	}
 	else if(ntn){
	   n->next=ntn->next;
	   ntn->next =n;
	   prev->next=ntn;
	}
	else
	   printf("Can't Swap with -NULL\n");
}

int node_count(struct node *head){
  	int count=0;
	struct node * temp=head;
	while(temp){
	   count++;
	   temp=temp->next;
	}
	return count;
}
/*Basic Sort O(n2) time complexity----*/
void b_sort(struct node **head){
	struct node *bprev,*bn,*bntn;
	int len;
	bprev=NULL;
	bn=(*head);
	len=node_count(*head);
	if(len<2)
	   return;
	bntn=bn->next;
	for(;bn!=NULL;bn->next){
	     for(;bntn!=NULL;bntn->next){
		  if(bn->data > bntn->data){
			 swap_nodes(head,bprev,bn,bntn);
		      }
		  
		}
	}
	
	

}
int main(){
	int a[10]={8,5,4,9,7,1,0,3,6,2};
	int i;
        struct node *head=NULL;

	for(i=0;i<10;i++)
	  insert_begin(&head,a[i]);
	printlist(head);
	swap_nodes(&head,head,head->next,NULL);
	printlist(head);
}
