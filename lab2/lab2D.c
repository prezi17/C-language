
/***************************************
* EECS2031B - Lab2*
* Author: Rajwinder kaur, Rajwinder kaur *
* Email: rkaur3@my.yorku.ca	*
* eecs_username: rkaur3 *
* York Student #: 216907602
****************************************/
#include <stdio.h>


#define N 10

int main () {
int i;
char c;
int digit[10];
 
for(i=0; i<10; i++)
digit[i]=0;
c=getchar();

while(c!=EOF)
{
if(c>= '0' && c<='9'){
	digit[c - '0']++;
}
	c =getchar();
	}
	
	
for (i=0; i<10; i++)
printf("%d: %d \n", i, digit[i]);

	return 0;
}
