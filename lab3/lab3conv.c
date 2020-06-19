
/***************************************
* EECS2031B - Lab3*
* Author: Rajwinder kaur, Rajwinder kaur *
* Email: rkaur3@my.yorku.ca	*
* eecs_username: rkaur3 *
* York Student #: 216907602
****************************************/


#include <stdio.h>

float fun_IF(int i, char op, float j);
float fun_II(int i, char op, int j);
float fun_FF(float i, char op, float j);

main(){

 int op1; float op2;  char operator;
 float resu, resu2, resu3;
 
 // conversion in arithemetic
 printf("3.0*9/2/4=%f  9/2*3.0/4=%f  9*3/2*3.0/4=%f\n", 3.0*9/2/4, 9/2*3.0/4, 9/2*3.0/4);
 
 // conversion in assignment
 float f  = 3.96;
 float f2 = 3.03;
 int i = f; int j = f2;
 printf("i: %d  j: %d\n", i, j);

while(op1!= -1 && op2!= -1) {
printf("enter operand_1 operator operand_2 separated by blanks>");
  scanf("%d %c %f", &op1,&operator, &op2);
printf("your input %d %c %f result in \n", op1, operator,op2);

printf("%f  (fun_IF)\n", fun_IF(op1,operator, op2));
printf("%f  (fun_II)\n", fun_II(op1,operator, op2));
printf("%f  (fun_FF)\n\n",fun_FF(op1,operator, op2));

}
return 0;
}
 
 
 // calIntFloat method takes in number and then conerts the int value into float and then use operator to do calculation 
float fun_IF(int i, char op, float j)
{
float resu;
	switch (op) {      // checks which operator is it and then evauates result
    case '+':

     resu =i+j;
          return resu;
      break;
    case '-': 
    resu=i-j; 
    return  resu;
     break;
    case '*': 
    resu = i*j;
    return resu;
     break;
    case '/':
    resu = i/j;
     return  resu;
     break;
default: return 0.0;

}
}
// this method takes in number and then converts the int value into float and then use operator to do calculation */
float fun_II(int i, char op, int j)
{  
float resu2;
 switch (op) {  
    case '+':

     resu2 =i+j;
          return resu2;
          break;
    case '-': 
    resu2=i-j; 
    return  resu2;
     break;
     
    case '*': 
    resu2 = i*j;
    return resu2;
     break;
    case '/':
    resu2 = i/j;
     return  resu2;
     break;
default: return 0.0;


}
}
// this method takes in number and then conerts the int value into float and then use operator to do calculation */
float fun_FF(float i, char op, float j)
{
	float resu3;
   switch (op) {  
    case '+':

     resu3 =i+j;
          return resu3;
      break;
    case '-': 
    resu3=i-j; 
    return  resu3;
     break;
    case '*': 
    resu3= i*j;
    return resu3;
     break;
    case '/':
    resu3 = i/j;
     return  resu3;
     break;
default: return 0.0;

}
}

 