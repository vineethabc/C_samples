/*Author: Vineeth Kodire
  Title : Structure padding.

*/
#include <stdio.h>
struct pad{
   int a;
   char b;
//   float f; //4 bytes storage
   char c;
   int :6;//it will take 1byte storage.
   char d;
//   float k:6; //we can't assign bit manipulation field in float.
   char j; //if it is allocating to the aligned mem it will take 4 bytes.
    
}
main(){

struct pad sp;
printf("\nsizeof(float)=%d\n",sizeof(float));
printf("\nsizeof(int)=%d\n",sizeof(int));
printf("size of structure=%d\n ",sizeof(sp));

}
