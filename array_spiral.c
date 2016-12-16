#include <stdio.h>
void printSpiral(int **, int);
main(){
int arr[3][3]={ {1,2,3},
                {4,5,6},          
	        {7,8,9}	
          };

printSpiral(arr,3);

}
void printSpiral(int **arr,int N)
{
    int i,j,k,n=N;
    int middle = (n-1)/2;
    for(i=N-1, j=0; i>0; i--, j++)
    {
        //print top row
        for(k=j; k<i; k++) printf("%d ", arr[j][k]);
        //print last column
        for(k=j; k<i; k++) printf("%d ", arr[k][i]);
        //print last row
        for(k=i; k>j; k--) printf("%d ", arr[i][k]);
        //print first column
        for(k=i; k>j; k--) printf("%d ", arr[k][j]);
 
    }
    //if odd size matrix print the middle value

     if (n% 2 == 1) printf("%d", arr[middle][middle]);
}
