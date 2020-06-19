
/***************************************
* EECS2031B - Lab3*
* Author: Rajwinder kaur, Rajwinder kaur *
* Email: rkaur3@my.yorku.ca	*
* eecs_username: rkaur3 *
* York Student #: 216907602
****************************************/

#include <stdio.h>

#define MY_PRINT(x,y,z)  printf("running average is %d / %d = %.3f\n", x,y,z)


void r_avg(int, int);


int main(int argc, char *argv[])
{
	
      int input; int count=1; int sum=0;
      double resu;

      printf("Enter number (-1 to quit):  ");
      scanf("%d", &input);

      while(input != -1)
      {
      	 	sum += input;
        r_avg(sum, count);
				count++;
			 printf("\n");
 	      printf("Enter number (-1 to quit):  ");
      scanf("%d", &input);
          /* read again */
	
       }  
	
       return 0;
}

void r_avg(int sum, int count)
{

double resu = sum/count;
sum = resu;
   MY_PRINT(sum, count, resu);   
}