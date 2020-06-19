/***************************************
* EECS2031B - Lab4*
* Author: Rajwinder kaur, Rajwinder kaur *
* Email: rkaur3@my.yorku.ca	*
* eecs_username: rkaur3 *
* York Student #: 216907602
****************************************/


#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define ROWS 20
#define COLUMNS 30

int main(int argc, char *argv[])
{
     char input_table[ROWS][COLUMNS];
        
    int i=0,  f = 0, k,l;
    int age;
    int rate1;
        char rate[10];
        double w = 0.0;
     int current_row = 0;
     int current_column;
     char name[10]; char ageS[10]; char rateS[10];
	    char res[30], mres[30];
     printf("Enter name age and rate: ");
     fgets(input_table[current_row], 30, stdin);   // add a /n
     
	     
     while(strcmp(name,"xxx")!=0)     
     {   
     
    
	 /* need to 'tokenize' the current input */	    
	sscanf(input_table[current_row],"%s %d %s", name, &age, rate);	
	
	
	sprintf(res, "%s %s %s", name, ageS, rateS);
	strcpy(input_table[current_row],res);
 	f++;
	
	for(k=0; name[k]!='\0';k++)
	 name[k]=toupper(name[k]);
	
 	//age = atoi(ageS);
	age += 10;	
	
	// rate = atof(rateS);	
	//  rate *= 1.5;
	
	i++;
  	
	 sprintf(mres, "%s %d %.2f", name, age, rate1);
	strcpy(input_table[current_row],mres);          
	f++;   
	  current_row++;
	  

			printf("Enter name age and rate: ");
			     fgets(input_table[current_row], 30, stdin);   // add a /n
			sscanf(input_table[current_row],"%s %d %s", name, &age, rate);	

        // read again      
     }

     printf("\nRecords generated in %s on %s %s\n", __FILE__, __DATE__, __TIME__);
     /* now display the input_table row by row */
	   for(l=0;l<current_row;l++)  { 
	    fputs(input_table[l], stdout);
	    printf("\n");
	}
     return 0;
}
