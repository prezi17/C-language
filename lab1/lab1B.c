/***************************************
* EECS2031B - Lab1 *
* Author: Rajwinder kaur, Rajwinder kaur *
* Email: rkaur3@my.yorku.ca	*
* eecs_username: rkaur3 *
* York Student #: 216907602
****************************************/

#include <stdio.h>

main()
{
  int m, d, y;
  printf("Enter month, day and year separated by spaces: ");
 
  scanf( "%d %d %d",  &m, &d, &y);
 
  printf("The input '%d %d %d' is reformatted as %d/%d/%d and %d-%d-%d\n",  m, d, y,y, m, d, y,m,d);
}
