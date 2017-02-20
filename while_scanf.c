#include<stdio.h>

int main(){
  int i;
  while(1){
    printf("Enter no?\n"); //step -1
 
    if(scanf(" %d",&i)>0)   //step-2
       printf("Num=%d\n",i);
    else
      printf("Entered character.Pls enter int\n");
  }
}




