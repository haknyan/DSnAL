#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

/*
#define MALLOC(p,s) \
    if ((p = malloc(s) == NULL)) { \
        fprintf(stderr, "Insufficient memory"); \
      exit(EXIT_FAILURE); \
    }
*/

#define MALLOC(p,s) if(!((p)=malloc(s))){fprintf(stderr,"Insufficient memory"); exit(EXIT_FAILURE);}


typedef struct listNode *listPointer;

typedef struct listNode{
   char data;
   struct listPointer *link;
}listNode;


int main(){
   listPointer first,second,third;
   
   MALLOC(first , sizeof(*first));
   MALLOC(second , sizeof(*second));
   MALLOC(third , sizeof(*third));
   
   third -> link = NULL;
   third -> data = 'S';
   
   second -> link = (struct listPointer*)third;
   second -> data = 'T';
   
   first -> link = (struct listPointer*)second;
   first -> data = 'C';

   return 0;
}