/*Author: Vineeth Kodire
  Title : External variable .

*/
#include <stdio.h>
extern int i;
float fun();
int i=35;
//i=55;
//i=55;
int main(){
float k;
k=fun();
i=55;
printf("num=%d",i);
//printf("k=%f",k);

}
float fun(){
  int k=0;
}
