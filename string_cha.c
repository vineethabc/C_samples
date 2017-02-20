#include<stdio.h>
#include<stdlib.h>
 void main()
{
char *nm1="vin";
char *nm2=NULL;
char arr[]="hi welcome";
char arr1[20];
int k,j;
nm2=nm1;
printf("%s",nm2);

printf("Enter th no ?\n");
k=scanf("%d",&j);

printf("k=%d j=%d",k,j);

printf("Enter th no Again?\n");
k=scanf("%d",&j);
printf("k=%d j=%d",k,j);

}
