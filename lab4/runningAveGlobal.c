
/***************************************
* EECS2031B - Lab4*
* Author: Rajwinder kaur, Rajwinder kaur *
* Email: rkaur3@my.yorku.ca	*
* eecs_username: rkaur3 *
* York Student #: 216907602
****************************************/




#include <stdio.h>

extern void r_avg();
extern double resu;
extern int sum;
extern int count;
int main(int argc, char *argv[])
{
    int input;

    printf("Enter number (-1 to quit): ");
    scanf("%d", &input);
	
    while(input != -1){	
    	sum += input;
        r_avg(sum, count);
				count++;
			 printf("\n");
 	      printf("Enter number (-1 to quit):  ");
      scanf("%d", &input);

     // r_avg();

      // read again
	
     }
	 
     return 0;
}
