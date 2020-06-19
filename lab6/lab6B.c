/***************************************
* EECS2031B - Lab 6*
* Author: Rajwinder kaur, Rajwinder kaur *
* Email: rkaur3@my.yorku.ca	*
* eecs_username: rkaur3 *
* York Student #: 216907602
****************************************/

 #include <stdlib.h>
 #include <stdio.h>
 #include <string.h>

 #define MAXLINES 30

 void exchange(char p[][50]);
 void printArray(char p[][50], int);

 main()
 {
     int count=0;  char inputs[MAXLINES][50];
     printf("sizeof inputs: %d\n\n", sizeof inputs);

     /* Read in the lines from the keyboard. */
     printf("Enter string: ");
     fgets(inputs[count], 50, stdin);

     while (strcmp("xxx\n", inputs[count]) !=0 )
     {

       count++;

       printf("Enter string: ");
       fgets(inputs[count], 50, stdin);

     }
     printf("\n");
     printArray(inputs, count);


      char tmp[50];
     strcpy(tmp,inputs[0]);
     strcpy(inputs[0],inputs[1]);
     strcpy(inputs[1], tmp);



     exchange(inputs);

     printf("\n== after swapping ==\n");
     printArray(inputs, count);


     return 0;
 }



 void exchange(char p[][50])
 {

     char tmp[50];
     strcpy(tmp,p[2]);
     strcpy(p[2],p[3]);
     strcpy(p[3], tmp);
     int k;
     for(k=0; k< 50; k++){
       char tmp = p[4][k];
       p[4][k] = p[5][k];
       p[5][k] = tmp;
     }

 }

 void printArray(char p[][50], int n)
 {
     int counter;
     for (counter = 0; counter < n; counter++)
        printf("[%d]: %s", counter, p[counter]);
 }
