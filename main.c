#include <stdio.h>
#include <stdlib.h>
#define MAX 10
typedef struct
{
    int items[MAX];
    int top;

}stack;

stack mystack;
void creatEmptyStack(stack * mystack);
void push(stack * mystack, int item);
void pop(stack * mystack);
int isEmpty(stack * mystack);
int isFull(stack * mystack);
void printStack(stack * mystack);

int main()
{
      int choice;
    int numb;
    creatEmptyStack(&mystack);
    while(1)
{

    printf("press 1 to push\n"
           "press 2 to pop\n"
           "press 3 to print\n"
           "press 4 to exit\n");
    scanf("%d",&choice);
    switch(choice){

    case 1:
    {
        int x;

        while(!isFull(&mystack))
        {

            printf("press 1 to push\n"
           "press 2 to back\n");
            scanf("%d",&x);

          if(x==1)
                 {
                    printf("enter an integer\n");
                    scanf("%d",&numb);
                    push(&mystack,numb);
                 }
             else if(x==2)
                {
                   break ;
                }
             else
                {
                    printf("wrong input\n");
                }

          }
          break;
        }



    case 2:
        {
            int x;

        while(!isEmpty(&mystack))
        {

            printf("press 1 to pop\n"
           "press 2 to back\n");
            scanf("%d",&x);

          if(x==1)
                 {
                    printf("item deleted\n");
                    pop(&mystack);
                 }
             else if(x==2)
                {
                   break ;
                }
             else
                {
                    printf("wrong input\n");
                }

          }

            break;
        }

    case 3:
        {

            printStack(&mystack);
            break;
        }

    case 4:
        {
           exit(0);
        }
    default:
        {
            printf("wrong input\n");

        }
   }
}

    return 0;
}

void creatEmptyStack(stack * mystack)
{
    mystack->top=-1;
}
void push(stack * mystack, int item)
{

    if(isFull(mystack))
    {
        printf("full\n");
    }
    else
    {

      mystack->top++;
      mystack->items[mystack->top]=item;
    }


}
void pop(stack * mystack)
{
    if(isEmpty(mystack))
    {
        printf("empty");
    }
    else
    {
      mystack->top--;
    }

}
int isFull(stack * mystack)
{
   if(mystack->top==MAX-1)
   {
       return 1;
   }
   else
   {
      return 0;
   }
}
int isEmpty(stack * mystack)
{
   if(mystack->top==-1)
   {
       return 1;
   }
   else
   {
      return 0;
   }
}
void printStack(stack * mystack)
{
    int i=0;
    if(isEmpty(mystack))
    {
       printf("empty\n");

    }
    else
    {
        printf("the stack items are\n");
        for(i=0;i<=mystack->top;i++)
    {
        printf("%d\n",mystack->items[i]);
    }
     printf("\n");

    }


}
