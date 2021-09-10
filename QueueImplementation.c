#include<stdio.h>
#define MAX 50
void enQueue(void);
void deQueue(void);
void display();
void size();
void reset();
void exit();
int front=-1;
int rear=-1;
int queue[MAX];


int main()
{
    int choice;
    printf("\n\t---------------------------");
    printf("\n\tWelcome to Queue Management");
    printf("\n\t---------------------------");
    printf("\n\tPlease select one of the following options:");
    printf("\n\t1.Display content \n\t2.Insert an item \n\t3.Remove an item \n\t4.Show queue size \n\t5.Reset Queue \n\t6.Exit\n");
    do
    {
        printf("\nSelect(1 - 6): ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:                
            display();   
            break;

            case 2:
            enQueue(); 
            break;

            case 3:
            deQueue();
            break; 

            case 4:
            size();
            break;

            case 5:
            reset();
            break;

            case 6:
            exit();
            break;

            default:
            printf("Wrong Choice: please see the options");                        
        }  //end of switch case
    }  //end of do
    while(choice!=6);
}  //end of main()


void display(){
    int i;
    if (front == rear)
        printf("\n\tQueue is empty \n");
    else
    {
        printf("\n\tQueue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}


void enQueue(){
    if(rear==MAX-1)
        printf("\n\t Queue is Full");
    else
        {
            printf("\n\t Enter no:");
            scanf("%d",&queue[rear++]);
        }
    
}

void deQueue(){
            if(front==rear)
                {
                    printf("\n\t Queue is empty");
                }
            else
                {
                    printf("\n\t Dequeue Element is %d",queue[front++]);
                }
            }


void size(){
         if(front==rear)
                {
                    printf("\n\t Queue is empty");
                }

        else{
            printf("\n\tsize of queue is %d",rear-front+1);
        }
}


void reset(){
    if(front==rear)
        {
            printf("\n\t Queue is already empty");
        }
    else{
          front=-1;
          rear=-1;
          printf("\n\tYou have successfully reset the queue...");
    }
}

void exit(){
    printf("\n\tyou are about to exit from queue...");
}


