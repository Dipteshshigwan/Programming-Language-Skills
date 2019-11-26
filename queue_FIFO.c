#include<stdio.h>
#include<stdlib.h>

#define SIZE 5      //Maximum number of elements that can be stored i.e. 5-1=4 elements

void enQueue();                             //		  --------------------------------
void deQueue();                             //        		  |       |       |       
void display();                             // 		  --------------------------------
int queue[SIZE], front = -1, rear = -1;     // rear=-1                 				  front=-1
void main()
{
    int ch;
    
    while(1)        //infinite loop, will end when choice will be 4
    {
        printf("\n*** Queue Menu ***");
		printf("\n\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
		printf("\n\nEnter your choice(1-4):");
		scanf("%d",&ch);
		
		switch(ch)
		{
		    case 1: enQueue();
		            break;
		    case 2: deQueue();
		            break;
		    case 3: display();
		            break;
		    case 4: exit(0);
		  
		    default: printf("\nWrong choice");
		}
    }   
}

void enQueue()
{
    int val;
    
    if(rear == SIZE-1)
        printf("\nQueue is Full!!");
    else 
    {
        printf("\nEnter element to enqueue:");
        scanf("%d",&val);
        if(front == -1)
            front = 0;
        rear++;
        queue[rear] = val;
        //printf("\nInserted -> %d", val);
    }
}
void deQueue()
{
    if(front == -1)
        printf("\nQueue is Empty!!");
    else
    {
        printf("\nDeleted element is %d", queue[front]);
        front++;
        if(front > rear)
            front = rear = -1;
    }
}
void display()
{
    if(rear == -1)
        printf("\nQueue is Empty!!!");
    else
    {
        int i;
        printf("\nQueue is:\n");
        for(i=front; i<=rear; i++)
            printf("%d\t",queue[i]);
    }
}