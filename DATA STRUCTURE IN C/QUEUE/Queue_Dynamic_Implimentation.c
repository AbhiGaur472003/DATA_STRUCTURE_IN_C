#include <stdio.h>
#include <stdlib.h>
int *queue,front=-1,rear=-1,choice;
void Enqueue()
{
    int *ptr=NULL;
    if(queue==NULL){
        front++;
        rear++;
        ptr=(int*)calloc(1,sizeof(int));
    }
    else{
        rear++;
        ptr=(int*)realloc(queue,sizeof(int)*(rear-front));
    }
    if(ptr==NULL){
        printf("\nNo memory is left\n");
        return ;
    }
    queue=ptr;
    printf("\nEnter the element to inserted: ");
    scanf("%d",&queue[rear]);
}
void Dequeue()
{
    int *ptr=NULL;
    if(queue==NULL){
        printf("\nQueue is Empty\n");
        return ;
    }
    else{
        printf("\nElement removed: %d\n",queue[front]);
        front++;
        ptr=(int*)realloc(queue,sizeof(int)*(rear-front+1));
    }
    queue=ptr;
}
void Peek()
{
    if(queue==NULL){
        printf("\nStack is Empty\n");
        return ;
    }
    printf("\nFirst Element is : %d\n",queue[front]);
    printf("\nLast Element is : %d\n",queue[rear]);
}
void Display()
{
    if(queue==NULL){
        printf("\nStack is Empty\n");
        return ;
    }
    printf("\nDisplaying the Elements: ");
    for(int i=front;i<=rear;i++){
        printf("%d ",queue[i]);
    }
    printf("\n");
}
int main()
{
    printf("NAME - ABHISHEK GAUR\nI'D - 200111135\nSEC - B\n");
    while(1){
        printf("\nQueue Operation:\n1.Enqueue\t2.Dequeue");
        printf("\t3.Peek\t4.Display\t5.Exit\n");
        printf("\nEnter your choices: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: Enqueue();
                    break;
            case 2: Dequeue();
                    break;
            case 3: Peek();
                    break;
            case 4: Display();
                    break;
            case 5: exit(0);
                     break;
            default: printf("\nInvalid Operation\n");
                     break;
        }
        if(choice==5){
            break;
        }
    }
    return 0;
}
