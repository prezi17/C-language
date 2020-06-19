
/***************************************
* EECS2031B - Lab4*
* Author: Rajwinder kaur, Rajwinder kaur *
* Email: rkaur3@my.yorku.ca	*
* eecs_username: rkaur3 *
* York Student #: 216907602
****************************************/


#include <stdio.h>

#define MY_PRINT(x,y,z)  printf("running average is %d / %d = %.3f\n", x,y,z)

// define global variables and a function


double resu;
int sum=0;
int count=1;

void r_avg(void)
{
	resu = sum/count;
 
   MY_PRINT(sum, count, resu);   
    // sum = resu;
}
