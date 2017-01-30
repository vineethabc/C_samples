#include<stdio.h>   //program error due to sring and char * related operation
#include<stdlib.h>
void tok();

int main(){
 char mystr[]="Hello\t How are You?";
 tok();
return 0;
}

void tok(){
 char Arr[20];
 int i=0;
// printf("\n char* p add=%x-->%s",p,p);
 char *p="Hello\t How are You?";

 while(*p!='\t'||*p!=' '){
   Arr[i]=*p;
   i++;   
 }
 Arr[i]='\0';
 printf("%s",Arr);

}
