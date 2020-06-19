
/***************************************
* EECS2031B - Lab2 *
* Author: Rajwinder kaur, Rajwinder kaur *
* Email: rkaur3@my.yorku.ca	*
* eecs_username: rkaur3 *
* York Student #: 216907602
****************************************/
#include<stdio.h>


int main(){
    int i;
    char c;
    int number;
   
   
    /*function definition*/
    int isDigit(char c){
   
    if(c >='0' && c <='9'){
    return 1;
    }
    else{
    return 0;
    }
 }
    while( i != (-10000 ))
     
    {
    	
   	 printf("Enter an integer and a character separated by blank: ");
        scanf("%d %c", &i, &c);  
        number = c - '0';    
           
        if (isDigit(c)){
        printf("Character '%c' represents a digit. Sum of %d and %d is %d \n", c, i, number, i + number);
     printf("\n");
        }
        else{
     printf("Character '%c' does not represent a digit \n", c);
    printf("\n");  
 }
 }

 }