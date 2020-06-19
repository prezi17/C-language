
/***************************************
* EECS2031B - Lab*
* Author: Rajwinder kaur, Rajwinder kaur *
* Email: rkaur3@my.yorku.ca	*
* eecs_username: rkaur3 *
* York Student #: 216907602
****************************************/
#include <stdio.h>

void swapIncre(int*, int*, int*);
void swap(int **p, int **q);

int main( ) {
  int a, b,c; 

  /* Input three integers*/
  scanf("%d %d %d", &a, &b,&c);
  while(a != -1) {
     printf("Original inputs:   a:%-4d  b:%-4d  c:%-4d\n", a, b,c);     
     swapIncre(&a,&b,&c);
     printf("Rearranged inputs: a:%-4d  b:%-4d  c:%-4d\n\n", a, b,c);  

     /* read again */
     scanf("%d %d %d", &a, &b,&c);
   }

}

void swapIncre(int *x, int *y, int *z){
	(*y) *= 2;
	swap(&x,&z);
}

void swap(int **p, int **q)
{
int temp = **p;
   **p = **q;
   **q = temp;

   **p += 100;
   }