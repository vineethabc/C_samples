#include<stdio.h>

void f1(){
   y=10;
}

static int y;

void f2(){
  y=20;
}
 int main(){
  
	printf("%d",y);
}
