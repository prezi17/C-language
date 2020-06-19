
/***************************************
* EECS2031B - Lab5*
* Author: Rajwinder kaur, Rajwinder kaur *
* Email: rkaur3@my.yorku.ca	*
* eecs_username: rkaur3 *
* York Student #: 216907602
****************************************/

/* Passing an array to a function. */

#include <stdio.h>

#define MAX 20
 

int largest(int * x, int);
void display(int *arr, int);

 main(int argc, char *argv[])
 {
     int array[MAX], count;

     /* Input MAX values from the keyboard. */
     int i;  count=0;
     
     while ( scanf("%d", &i) != EOF){
        *(array + count) = i; // store in array[count]
        count++;
     }


      /* Call the function and display the return value. */
      printf("Inputs: ");
      display(array, count);

     
     
     printf("\nLargest value: %d\n", largest(array, count));
     
     return 0;
 }
 
 /* display a int array */

 void display(int *arr , int n)
 {
 	int i = 0;
 	while( i < n) {
 		printf("%d ", *(arr + i));
 		i++;
 		
 	}
 }


/* Function largest() returns the largest value */
 /* in an integer array */

 int largest(int * arr,  int n)
 {
 	int max = *arr;
 	int i = 0;
 	for(i = 0; i < n; i++) {
 		if(*(arr + i )>max) {
 			max = *(arr+i);
 		}
 	}
 	return max;
 }

