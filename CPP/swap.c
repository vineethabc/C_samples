 #include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(int *p,int *q){
   int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
void swapchar(char *p,char *q){
 /*char* temp=p;
 p=q;
 q=temp;
 printf("\ninside swap\t\tstr1=%s str2=%s\n",p,q);
*/
/*char *temp=malloc(10);
//char *temp;  //will give error
strcpy(temp,p);
strcpy(p,q);
strcpy(q,temp);
*/
 char *temp=p;
 p=q;
 q=temp;
 printf("\ninside swap\t\tstr1=%s str2=%s\n",p,q);
}
void main(){
 int p =20;
 int q =30;

 char a[]="string1";
 char b[]="string2";
 
// swap(&p,&q);
// printf("p=%d q=%d",p,q);
 swapchar(a,b);
  printf("\nstr1=%s str2=%s\n",a,b);

}
