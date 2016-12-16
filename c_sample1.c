#include <stdio.h>
#include <stdlib.h>
void main(){
int no;
printf("enter no");
while(1){
 scanf("%d",&no);
 if(no==42)
  exit(0);
 else if(no<100)
  printf("%d\n",no);
 else
  continue;
}
}
