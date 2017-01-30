#include <stdio.h>
struct udata{
 	int i;
	int j;
	char c;
 };
int main(){
 struct udata mydata={5,10,'A'};
 char * p =&mydata.c;
 printf("char = %c\n",*p);

 printf("j= %d\n",*((int *)p-2));

 return 0;
}
