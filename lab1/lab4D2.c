#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define ROWS 20
#define COLUMNS 30

int main(int argc, char *argv[])
{
     char input_table[ROWS][COLUMNS];
        
     
     int current_row =0;
     char name[10]; 
     int age, i ; 
     float rate;
     printf("Enter name age and rate: ");
     fgets(input_table[current_row], 30, stdin);   // add a /n
	 
     while(1)        
     {    
	 /* need to 'tokenize' the current input */	    
	 sscanf(input_table[current_row],"%s %d %f", name, &age, &rate); 

         age += 10;
           rate *= 1.5;
	   if(!strcmp(name, "xxx")){
           break;
           }
           for(i=0; i< strlen(name); i++){
              name[i] = toupper(name[i]);
           }
	     
           sprintf(input_table[current_row+1], "%s %d %.2f\n", name,age,rate); 
           current_row += 2;

        // read again 
         printf("Enter name age and rate: ");
     fgets(input_table[current_row], 30, stdin);      
     }

     printf("\nRecords generated in %s on %s %s\n", __FILE__, __DATE__, __TIME__);
     /* now display the input_table row by row */
	 for(i=0; i< current_row; i++)
           printf("%s", input_table[i]);
      

     return 0;
}

