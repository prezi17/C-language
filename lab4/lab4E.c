#include <stdio.h>
int main()
{
int age=10;
int age2= 100;
int *ptr = &age;
int *ptr2 = &age2;

//ptr2;
printf("age: %d %d\n", age, *ptr);

*ptr = 14;
age = *ptr;
printf("age: %d %d \n" , age, *ptr );

age2= *ptr;
printf("age: %d %d \n" , age2, *ptr2);

ptr2 = &age;
printf( "ptr`s2  POINTEE : %d \n" ,*ptr2);


printf("age: %d %d %d\n" ,age, *ptr, *ptr2 );
(*ptr2)--;
printf("age: %d %d %d\n" ,age, *ptr2, *ptr );
 printf("%p %p %p \n " ,&age,ptr,ptr2);


}