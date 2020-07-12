
#include <stdio.h>
#include <stdlib.h>

void insertBegining(int);

struct node {
   int data;
   struct node * next;
};

struct node * head;
int count = 0;

main()
{
   head = NULL;

   insertBegining(100);
   insertBegining(200);
   insertBegining(300);
   insertBegining(400);
   insertBegining(500);

   int i;
   /*printf("%d\n", count);*/
   struct node * cur;
   for(cur= head; cur != NULL; cur= cur->next)
     printf("%d ", cur->data);
   printf("\n");
}

void insertBegining(int dat){
   count++;  //keeps the track of number of nodes in linked list.
   struct node *newNode = malloc(sizeof(struct node));
   newNode -> data = dat;

   newNode -> next = head;

   head = newNode;

}

/*The reason why lab7D1 is not working because in the function, we declare a new object "newNode" whose memory deallocates after exiting the function, therefore no new node is being created. That's why it does not work.*/
