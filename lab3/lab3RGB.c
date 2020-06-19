

/***************************************
* EECS2031B - Lab3*
* Author: Rajwinder kaur, Rajwinder kaur *
* Email: rkaur3@my.yorku.ca	*
* eecs_username: rkaur3 *
* York Student #: 216907602
****************************************/


#include <stdio.h>

#define AlphaValue 100
#define SIZE 32
void printBinary(int c);

int main() {

  int r, g,b;
  unsigned int rgb_pack;
  int r_unpack, g_unpack,b_unpack;
  int alpha = AlphaValue;

  printf("enter R value (0~255): ");
  scanf("%d",&r);
  printf("enter G value (0~255): ");
  scanf("%d",&g);
  printf("enter B value (0~255): ");
  scanf("%d",&b);

  while(! (r<0 || g<0 || b <0) )
  {		
     printf("A: %d\t", alpha);  printBinary(alpha); printf("\n");
     printf("R: %d\t", r);  printBinary(r); printf("\n");
     printf("G: %d\t", g);  printBinary(g); printf("\n"); 
     printf("B: %d\t", b);  printBinary(b); printf("\n"); 

    /* do the packing */

rgb_pack = (alpha<<24)|(r<<16)|(g<<8)|b;




     //printf("\nPacked: value %d\t", rgb_pack); printBinary(rgb_pack);printf("\n");
     printf("\nPacked:\t"); printBinary(rgb_pack);printf(" (%d)\n", rgb_pack);
     printf("\nUnpacking  ......\n");

    /* do unpacking */
r_unpack = (rgb_pack & 0x00ff0000)>>16;
    g_unpack = (rgb_pack & 0x0000ff00)>>8;
    b_unpack = (rgb_pack & 0x000000ff);






     printf("R: "); printBinary(r_unpack); printf(" (%d, %#o, %#X)\n", r_unpack, r_unpack, r_unpack);
     printf("G: "); printBinary(g_unpack); printf(" (%d, %#o, %#X)\n", g_unpack, g_unpack, g_unpack);
     printf("B: "); printBinary(b_unpack); printf(" (%d, %#o, %#X)\n", b_unpack, b_unpack, b_unpack);
     printf("------------------------------------\n"); 
	 
     /* read again */
     printf("\nenter R value: ");
     scanf("%d",&r);
     printf("enter G value: ");
     scanf("%d",&g);
     printf("enter B value: ");
     scanf("%d",&b);

  }

}
void printBinary(int n ){
        printf("binary: ");
        int cou = SIZE-1;
        int k[SIZE]={0};

        while (n) {
             if (n & 1)
                  k[cou]=1; //printf("1");
             else
                  k[cou]=0; //printf("0");

             n >>= 1; 
             cou--;
        }
        int i=0;
        for(; i< SIZE;i++)
        {
            printf("%d", k[i]);
            if ((i+1)%8==0)
            {
                printf(" ");
            }
        }

}
