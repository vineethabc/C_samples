#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Add(char *,int);
void Dele(int);
void print();
typedef struct node{
	char * name;
        int rollno;
	struct node *next;

}node1;

node1 *head=NULL;

void main()
{
 int irl;
 char nm[20];
 printf("Enter the name and Roll no?\n");
 scanf("%s %d",nm,&irl);
 Add(nm,irl);
 printf("Enter the name and Roll no?\n");
 scanf("%s %d",nm,&irl);
 Add(nm,irl);
 print();
 printf("Enter the value to delete\n");
 scanf("%d",&irl);
 Dele(irl);
 print();
 }
void Dele(int idel){
int k=0;
node1 *pre=head;
node1 *cur=head->next; 
 if(head==NULL)
  return;
 else if(cur==NULL&&pre->rollno==idel){

    printf("Record found1\n"); 
    free(pre->name);
    free(pre);
    head=NULL;
    return;
  }
else{
   do{
      if(cur->rollno==idel){
        printf("Record found2\n");
        k=1;
        pre->next=cur->next;
        free(cur->name);
        free(cur);
        return ; 
       }
      else{
        pre=cur;
        cur=cur->next;
        }
    }while(cur!=NULL); 
     
  if(!k) 
  printf(" record not  found3\n");

    
 }
  
// printf("No records");

}
void Add(char *nm ,int itrl){
printf("Adding name %s  and %d len =%d\n",nm,itrl,strlen(nm));
node1 * tmp=(node1 *)malloc(sizeof(node1));
tmp->name=(char *)malloc(strlen(nm)+1);
tmp->rollno=itrl;
//tmp->name=nm;/*we can't assign the addres of array here bcs in main fn same array address is used for storing other node names, 						temporarly its a temporary variable.*/
strcpy(tmp->name,nm);
tmp->next=NULL;
if(head==NULL)
 head=tmp;
else{
 tmp->next=head;
 head=tmp;  
}
}

void print(){
node1 *temp=head;
printf("\n");
while(temp!=NULL){
 printf("%s,%d->",temp->name,temp->rollno);
 temp=temp->next;
}
printf("\n");
}
