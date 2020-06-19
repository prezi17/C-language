

/***************************************
* EECS2031B - Lab2 *
* Author: Rajwinder kaur, Rajwinder kaur *
* Email: rkaur3@my.yorku.ca	*
* eecs_username: rkaur3 *
* York Student #: 216907602
****************************************/
#include <stdio.h>

#define MAX_SIZE 20

int length(char[]);
int indexOf(char[], char );
int isQuit (char[]);
int main() {

   char word[MAX_SIZE];
   char c;
   char helloArr[]  = "hello";
   
   printf("\"%s\" contains %d input characters, but the size of it is %zu (bytes)\n\n", helloArr, length(helloArr), sizeof(helloArr));

   /********** Fill in your code here. **********/
   printf("Enter a word and a character separated by blank: ");
   scanf("%s %c", word, &c);

    
    while(!(isQuit(word)))
  {
 
			
		printf("Input word is \"%s\". Contains %d characters. Index of '%c' in it is %d \n\n", word, length(word), c, indexOf(word, c));
		printf("Enter a word and a character separated by blank: ");
		scanf("%s %c", word, &c);

		
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
 };
	return count;
}

int indexOf(char arr[], char c)
{ 
		int i = 0;
		int j;
		while (arr[i] != '\0')
		{
			if(arr[i] == c)
			{
				j = i;
				break;
			}
			else 
			{
				j = -1;
			}
			i++;
		} 
		return j;
 
}


int isQuit (char word[])
{
 
 if (word[0]=='q' && word[1]=='u' && word[2]=='i' && word[3]=='t' && word[4]=='\0')
    return 1; 
 else 
    return 0;
}
