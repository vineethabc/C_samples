#include <stdio.h>
void change(int *p){

*p=50;

}

main(){

const int i=30;
//change(&i);
int *p=&i;
*p=55;
printf("i=%d\n",i);


}
