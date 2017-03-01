//Selection sort.

#include <stdio.h>
 
int main()
{
   int array[100], n, c, d, min, swap;
 
   printf("Enter number of elements\n");
   scanf("%d", &n);
 
   printf("Enter %d integers\n", n);
 
   for ( c = 0 ; c < n ; c++ )
      scanf("%d", &array[c]);
 
   for(c=0;c<n-1;c++){
       min=c;
      for(d=c+1;d<n;d++){
         if(array[d]<array[min]){
           min=d;
         }
       if(min!=c){
       swap=array[c];
       array[c]=array[min];
       array[min]=swap;
      }
     }

   }
 
   printf("Sorted list in ascending order:\n");
 
   for ( c = 0 ; c < n ; c++ )
      printf("%d\n", array[c]);
 
   return 0;
}
