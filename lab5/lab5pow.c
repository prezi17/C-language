/***************************************
* EECS2031B - Lab4*
* Author: Rajwinder kaur, Rajwinder kaur *
* Email: rkaur3@my.yorku.ca	*
* eecs_username: rkaur3 *
* York Student #: 216907602
****************************************/

#include <stdio.h>
#include <math.h>


double my_pow(double base, double p);

int main(int argc, char *argv[])
{
   int base, power; 
  
   printf("enter base and power: ");
   scanf("%d %d", &base, &power);

   while (base != -100){
        double res = pow(base, power);
        double res2 = my_pow(base, power);
        printf("pow:    %.4f\n", res);
        printf("my_pow: %.4f\n", res2);
        printf("\nenter base and power: ");
        scanf("%d %d", &base, &power);
    }
    return 0;
}

double my_pow(double base, double p)
{
	double absoulte;
	if( p == 0) {
		return 1;
}
    if(p < 0) {
    	p = p +(-2*p);
 	// p=abs(p);
 	return 1/(base * my_pow(base , (p-1)));

					}
   else{
   return (base * my_pow(base , (p-1)));
			}
}