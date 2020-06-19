
/***************************************
* EECS2031B - Lab4*
* Author: Rajwinder kaur, Rajwinder kaur *
* Email: rkaur3@my.yorku.ca	*
* eecs_username: rkaur3 *
* York Student #: 216907602
****************************************/
#include <stdio.h>

#define MY_PRINT(z)  printf("running average is %.3f\n", z)

double r_avg(int);

int main(int argc, char *argv[])
{
	
   int input;  
   printf("enter number (-1 to quit): ");
   scanf("%d", &input);

   while (input != -1){
        double res = r_avg(input);
        MY_PRINT(res);
printf("\n");

        printf("enter number (-1 to quit): ");
        scanf("%d", &input);
    }
	
    return 0;
}

double r_avg(int currentInput)
{
    static int sum, inputCount=1;
    sum += currentInput;
    double resu = (float)sum/inputCount++;
    return resu;
     
}
