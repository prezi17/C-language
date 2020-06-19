
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
    char inputs_table [ROWS][COLUMNS];
    char name[10]; char ageS[10]; char rateS[10];
    int i=0, age, f = 0, k;
    double rate;
    char res[30], mres[30];
    
	
    printf("Enter name age and rate: ");
    scanf("%s %s  %s", name, ageS, rateS); 
       
    while (strcmp(name,"xxx")!=0)        
    {  
        sprintf(res, "%s %s %s", name, ageS, rateS);
	strcpy(inputs_table[i],res);
 	f++;
	
	for(k=0; name[k]!='\0';k++)
	 name[k]=toupper(name[k]);
	
 	age = atoi(ageS);
	age += 10;	

	rate = atof(rateS);	
	rate *= 1.5;
	i++;
  	
	sprintf(mres, "%s %d %.2f", name, age, rate);
	strcpy(inputs_table[i],mres);          
	f++;

       /* read again using scanf(%s %s %s) */ 
       printf("Enter name age and rate: ");
       scanf("%s %s  %s", name, ageS, rateS);  
	i++;   
    }
     printf("\nrecords generated %s %s %s\n", __FILE__, __DATE__, __TIME__); 
    
    /* now display the input_table row by row */      
 	for(i=0;i<=f;i++)
 	{
	 printf("%s\n", inputs_table[i]);
	}
     return 0;
}

