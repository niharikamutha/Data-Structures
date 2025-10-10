#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

struct queue
{
    int r , f;
    int data[SIZE];
};
typedef struct queue QUEUE;

void enqueue(QUEUE *q ,int item)
{
    if(q->r==SIZE-1)
        printf("Queue full");
    else
    {
        q->r=q->r+1;
        q->data[q->r]=item;
        if(q->f==-1)
            q->f=0;
    }
}

void dequeue(QUEUE *q)
{
    if(q->f==-1)
        printf("Queue is empty");
    else
    {
        printf("Element that is removed is :%d \n",q->data[q->f]);
        if(q->f==q->r)
        {
            q->f=-1;
            q->r=-1;
        }
        else
            q->f=q->f+1;
    }
}
void display(QUEUE q)
{
    int i;
    if(q.f==-1)
        printf("Queue is empty");
    else
    {
        printf("Elements to the given data: \n");
        for(i =q.f ; i<=q.r ;i++)
            printf("%d\n",q.data[i]);
    }
}

int main()
{
    int item , ch;
    QUEUE q;
    q.f=-1;
    q.r=-1;
    for(;;)
    {
        printf("\n 1-Enqueue \n 2-Dequeue \n 3-Display \n 4-Exit \n");
        printf("Enter your choice: \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("Element to be inserted: ");
                    scanf("%d",&item);
                    enqueue(&q,item);
                    break;
            case 2: dequeue(&q);
                     break;
            case 3: display(q);
                    break;
            case 4: exit(0);
            default: printf("Invalid");
        }
    }
    return 0;
}
