#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

struct stack
{
    int top;
    int data[SIZE];
};
typedef struct stack STACK;

void push(STACK *s, int item)
{
    if(s->top==SIZE-1)
    {
        printf("Stack overflow");
    }
    else
    {
        s->data[++(s->top)]=item;

    }
}

void pop(STACK *s)
{
    if(s->top ==-1)
        printf("Stsck underflow");
    else{
        printf("Element to be poped is %d",s->data[s->top]);
        s->top=s->top-1;
    }
}

void display(STACK s)
{
    int i ;
    if(s.top==-1)
        printf("stack is empty");
    else
    {
        printf("stack contents are : \n");
        for(i =s.top;i>=0;i--)
        {
            printf("%d\n",s.data[i]);
        }
    }
}

int main()
{
    int ch,item;
    STACK s;
    s.top=-1;
    for(;;)
    {
        printf("1-push\n2-pop\n3-display\n4-exit\n");
        printf("choice : \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :printf("read the elements to be pushed");
                    scanf("%d",&item);
                    push(&s,item);
                    break;
            case 2 :pop(&s);
                    break;
            case 3:display(s); break;
            default : exit(0);
        }
    }
    return 0;
}
