
/***************************************
* EECS2031B - Lab3*
* Author: Rajwinder kaur, Rajwinder kaur *
* Email: rkaur3@my.yorku.ca	*
* eecs_username: rkaur3 *
* York Student #: 216907602
****************************************/
#include <stdio.h>
#include <string.h>

int year;
int isLeap(int year);

int main(){
while(year>=0) {

printf("Enter a year: ");
   scanf("%d", &year);
   
   isLeap(year);
}
return 0;
}
int isLeap(int year){

if((((year % 4 == 0) && (year % 100 != 0)) ||
             (year % 400 == 0)))
             {
             printf("Year %d is a leap year \n\n", year);
        }            
else{
printf("Year %d is not a leap year \n\n", year);
}           
}