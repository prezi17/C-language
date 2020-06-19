/***************************************
* EECS2031B - Lab3*
* Author: Rajwinder kaur, Rajwinder kaur *
* Email: rkaur3@my.yorku.ca	*
* eecs_username: rkaur3 *
* York Student #: 216907602
****************************************/

#include <stdio.h>

#define SIZE 10
int my_atoi (char c[]);
int length(char c[]);
int power(int base, int n);

int main(){
  int a,b,t;
  char arr [SIZE];

  printf("Enter a postive number or 'quit': " );

  scanf("%s", arr);

  while(strcmp(arr, "quit")!=0) 
  {
    printf("%s", arr);

    a = atoi(arr);
    printf("\natoi:    %d (%#o, %#X)\t%d\t%d\n", a,a,a, a*2, a*a);

    b = my_atoi(arr);
    printf("my_atoi: %d (%#o, %#X)\t%d\t%d\n", b,b,b, b*2, b*b); 

    /*reads again*/
    printf("Enter a postive number or 'quit': " );
    scanf("%s", arr);
  }
  return 0;
}

int length(char arr[]) /*function to return length of the char array*/
{
 int i, res=0;
 for(i=0; arr[i] != '\0'; i++)
 { 
  res++;
 }
 return res;
}


/* convert an array of digit characters into a decimal int */

/* textbook did scan from left to right.
 Here you should scan from right to left. This is a little complicated but more straightforward */

int my_atoi (char c[])
{
 int l,i,n,p=0;
 l = length(c);
 
 for(i = l-1; l>0 && (c[i] <='9' && c[i] >='0'); i--,l--)
 {
  n = 10*n+(c[p]-'0');
  p++;
 }
 return n;
}
