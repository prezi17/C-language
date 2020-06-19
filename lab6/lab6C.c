/***************************************
* EECS2031B - Lab 6*
* Author: Rajwinder kaur, Rajwinder kaur *
* Email: rkaur3@my.yorku.ca	*
* eecs_username: rkaur3 *
* York Student #: 216907602
****************************************/
#include <stdio.h>
#include <string.h>
#define SIZE 9

void exchangeParr(char *[]);
void printParr(char *[], int );
void printParr2(char **, int );

main(){

 char * inputs[SIZE] = {"this is input 0, giraffes", "this is input 1, zebras",  "this is input 2, monkeys",
                      "this is input 3, kangaroos"};

  char arr1 [] = "this is input 4, do you like them?";
  char arr2 [] = "this is input 5, yes";
  char arr3 [] = "this is input 6, thank you";
  char arr4 [] = "this is input 7, you're welcome";
  char arr5 [] = "this is input 8, bye";


  inputs[4] = arr1;
  inputs[5] = arr2;
  inputs[6] = arr3;
  inputs[7] = arr4;
  inputs[8] = arr5;

  printf("sizeof char*: %d, sizeof pointer array: %d\n\n", sizeof(char*), sizeof inputs );

  // display the array by calling printParr
   printParr(inputs, SIZE);

  // swap pointee of first and second element pointers

   char * tmp = inputs[0];
  inputs[0] = inputs[1];
  inputs[1] = tmp;
  // call exchangeParr() to swap some other 'rows';

 exchangeParr(inputs);

  printf("\n== after swapping ==\n");   printf("===========================\n");

  // display the swapped array by calling printParr()
    printParr(inputs, SIZE);
    printf("\n");
  // display the swapped array again by calling printParr2()
     printParr2(inputs, SIZE);
}
void printParr(char *p[], int n){
  int i;
  for (i=0;i<n ;i++ )
  {
     printf("[%d] -*-> %s\n", i, p[i]);
  }
}

void printParr2(char **p, int n){
  int i;
  for (i=0;i<n ;i++ )
  {
     printf("[%d] -*-> %s\n", i, *(p+i));
  }
}


void exchangeParr(char *p[])
{

  char * tmp = p[2];
  p[2] = p[3];
  p[3] = tmp;

  tmp = p[4];
  p[4] = p[5];
  p[5] = tmp;
}
