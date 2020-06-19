/***************************************
* EECS2031B - Lab1 *
* Author: Rajwinder kaur, Rajwinder kaur *
* Email: rkaur3@my.yorku.ca	*
* eecs_username: rkaur3 *
* York Student #: 216907602
****************************************/

#include <stdio.h>

float sum (float i, float j){
   return i+j;             
}
int main()
{
	int k, q=1;
	printf("Enter the number of interactions : ");
scanf ("%d", &k);
printf("\n");
for(q=1;q<=k; q++)
{
	float i , j;
printf ("Enter two float numbers separated by ## : ");
scanf ("%f##%f", &i, &j);
   
   float su= sum(i,j);
   printf( "%f + %f = %f\n\n", i,j, su);

  // return 0;
   

}
/*
/* function definition 
float sum (float i, float j){
   return i+j;             
} */
}
