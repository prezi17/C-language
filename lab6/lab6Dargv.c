/***************************************
* EECS2031B - Lab 6*
* Author: Rajwinder kaur, Rajwinder kaur *
* Email: rkaur3@my.yorku.ca	*
* eecs_username: rkaur3 *
* York Student #: 216907602
****************************************/

#include <stdio.h>
#include <string.h>

int getSum(char *[], int n);
int getDiff(char **, int n);

int main(int argc, char *argv[]){

	int i, j;
	char sum;
	printf("There are %d arguments (excluding \"%s\")\n", argc-1, argv[0]);
	char ** p = argv;



	if (!strcmp(argv[1], "diff")){
	for(i = 2; i < argc; i++){
	if( i == argc-1){
	printf("%d\n", atoi(*(p+i)));
	}
	else{
	printf("%d - ", atoi(*(p+i)));
	}
	}
	printf("= %d\n\n", getDiff(argv, argc));
	}
	else{
	for(i = 2; i < argc; i++){
	if( i == argc-1){
	printf("%d\n", atoi(*(p+i)));
	}
	else{
	printf("%d + ", atoi(*(p+i)));
	}
	}
	printf("= %d\n\n", getSum(argv, argc));
	}
	return 0;
}

int getSum(char * argv[], int n){

	int i;
	int sum = 0;
	for(i = 2; i < n; i++){
	sum += atoi(*(argv+i));
	}

	return sum;

}

int getDiff(char ** argv, int n){

	int i, sum = 0;

	for(i = 3; i < n; i++){
	sum -= atoi(*(argv+i));
	}

	return sum + atoi(*(argv+2));

}
