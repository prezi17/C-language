
/***************************************
* EECS2031B - Lab4*
* Author: Rajwinder kaur, Rajwinder kaur *
* Email: rkaur3@my.yorku.ca	*
* eecs_username: rkaur3 *
* York Student #: 216907602
****************************************/



#include <stdio.h>
#include <string.h>
#include <math.h>
#define SIZE 10
#define SIZE2 40

int main(int argc, char *argv[])
{

     char input[SIZE2];    
     char name[SIZE];  
     int age;
     float rate = 0.0;
     double flo = 0.0, cei = 0.0;
     char resu[SIZE2], resu2[SIZE2];
	
     printf("Enter name, age and rate (or \"exit\"): ");
     fgets(input, 40, stdin);
     
     
     while(strcmp(input, "exit\n") != 0)
     {    
     
      printf("%s", input);  // no \n needed
       fputs(input, stdout); 
	sscanf(input, "%s %d %f", name, &age, &rate); 
   name[0] = toupper(name[0]);
 	age += 10; 
	rate += rate;
   	flo = floor(rate);
        cei = ceil(rate);
        sprintf(resu, "%s-%d-%.3f-[%.0f,%.0f]",name, age, rate, flo, cei);
      	puts(resu);

	strcpy(resu2, resu);
	puts(resu2);

       //output original input using two functions.
      
     printf("\n");
  printf("Enter name, age and rate (or \"exit\"): ");
     fgets(input, 40, stdin);
       /* use fgets to read again */

     } 
      return 0;
}
