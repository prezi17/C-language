
/***************************************
* EECS2031B - Lab5*
* Author: Rajwinder kaur, Rajwinder kaur *
* Email: rkaur3@my.yorku.ca	*
* eecs_username: rkaur3 *
* York Student #: 216907602
****************************************/


#include <stdio.h>
#include <string.h>

#define SIZE 30

void sortArray (char *);


int main ()
{   
   
   char arr[SIZE];
  
   fgets(arr,SIZE,stdin);
   while ( strcmp(arr,"quit\n")!= 0  )
   {
      arr[strlen(arr)-1] = '\0'; // remove the trailing \n
      
     sortArray(arr);
     printf("%s\n\n",arr);
      
   /* read again*/
 
      fgets(arr,SIZE,stdin);
    }
    return 0;
}


void sortArray (char *arr){

int i, j, smallest, temp;
int n = strlen(arr);

for(i=0; i<=n-2;i++) {
smallest = i;
   for(j = i+1; j<=n-1;j++) {
   	
   	if(*(arr+j)<*(arr+smallest)) {
   		smallest = j;
   	}
   }
   temp = *(arr+i);
   *(arr+i) = *(arr + smallest);
   *(arr + smallest) = temp;
}

}