
/***************************************
* EECS2031B - Lab2*
* Author: Rajwinder kaur, Rajwinder kaur *
* Email: rkaur3@my.yorku.ca	*
* eecs_username: rkaur3 *
* York Student #: 216907602
****************************************/
#include<stdio.h>


int main(){

    int c;
    int outC;
     c=getchar();
    
    while( c != EOF )
     
    {

        
       if (c >= 'a' && c <= 'z')
        outC = c- ('a'-'A');
        
        else 
        		outC=c;
        		
		putchar(outC);
		c=getchar();
		}

 return 0;
 }