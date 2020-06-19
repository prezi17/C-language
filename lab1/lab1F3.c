/***************************************
* EECS2031B– Lab1 *
* Author:Rajwinder kaur, Rajwinder kaur *
* Email: rkaur3@my.yorku.ca	*
* eecs_username: rkaur3 *
* York Student #: 216907602
****************************************/


#include <stdio.h> // define EOF

main(){
 int c;
 int count = 0;
 int line = 0;
 
 c = getchar();
 while(c != EOF) /* no end of file*/
 { 
 if(c != '\n')
 {
  count++; //include spaces and '\n'
 }
 else if(c == '\n') { 
   line++;
   }
   c = getchar(); /* read next */
 
 }
 printf("# of chars: %d\n",count);
 printf("# of lines: %d\n",line);


}
