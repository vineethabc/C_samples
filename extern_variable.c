/*Author: Vineeth Kodire
  Title : External variable .

*/
#include <stdio.h>
extern int i;/*//declaration (memmory is not allocated yet),it should be define in some other file and include that file,ow define here
               // ow compilation error
	      //--u can declare and define in one step like extern int i=35 */
float fun();
//int i=35;// No-error: 35 is assigned to i(extern); here definition or u can use i=35 its means implicitly i default to int
// float i=55; //error- redefinition of i(diff vari hving same name)

int main(){
 float k;
 i=100;                /*if you are assigning value for the 1st time here won't compile will gv undef ref erro. 
			to avoid include header hv this extern variable definiton*/
 printf("num=%d",i);
 k=fun();
 //printf("k=%f",k);

}
float fun(){
  int k=0;
  printf("k=i=%d",i);
}
