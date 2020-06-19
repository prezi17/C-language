#include <stdio.h>

#define SIZE 10

 int power(int num, int po)
 {
 int k,temp;
 int c=1;
for ( k=1; k <=po; k++);
{
	num=temp;
 c=c*temp;
}
return c;
 }
int main(){
  int a,b;
  char arr [SIZE];
  char word[SIZE];

  printf("Enter a postive number or 'quit': " );
  scanf("%s", arr);
  
  //
  
  while( !(isQuit(arr)))
	  {
    printf("%s", arr);

    a = atoi(arr);
    printf("atoi:    %d (%#o, %#X)\t\t%d\t\t%d\n", a,a,a, a*2, a*a);

    b = my_atoi(arr);
  	  printf("my_atoi: %d (%#o, %#X)\t\t%d\t\t%d\n", b,b,b, b*2, b*b);
    
  	 printf("\n");
	
 		printf("Enter a postive number or 'quit': " );
 
 		scanf("%s", arr);
   
  		}
return 0;

}
int length(char arr[])
{	
	int i = 0;
	int count = 0;
	while(arr[i] != '\0')
	{
	count++ ;
	i++;
 }
	return count;
}

/* convert an array of digit characters into a decimal int */

/* textbook did scan from left to right.
 Here you should scan from right to left. This is a little complicated but more straightforward */

int my_atoi (char c[])
{
int  n=0;

int i= length(c);
//printf("legth is %d",i);
int x;
for(i>=0 && c[i]>= '0' && c[i] <= '9'; --i;);

 int p= power(10,i);
  x=((c[i]-'0')%10)*p;

n = n+x;
//n=10*n+ (c[i]-'0');
return n;


	/*if (c[i] >= '0' && c[i] <= '9')
	{
		for (i=length(c); i>=0; i++)
    {
	
	}
		return n;
		
		
	}   */
	
}

int isQuit(char word[])
{
 
 if (word[0]=='q' && word[1]=='u' && word[2]=='i' && word[3]=='t' && word[4]=='\0')
    return 1; 
 else 
    return 0;
} 

 
