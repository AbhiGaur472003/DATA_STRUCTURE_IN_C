#include<stdio.h>
#include<stdlib.h>
void Enqueue(int *a,int *front,int *rear){
    if((*front)==-1){
       (*front)++;
       (*rear)++;
    }
    if((*rear)>9){
         printf("\nStack is Full\n");
    }
    else{
         printf("\nEnter the element: ");
         scanf("%d",&a[(*rear)]);
         (*rear)++;
    }
}
void Dequeue(int *a,int *front,int *rear){
    if((*front)>(*rear-1) || (*front)==-1){
         printf("\nStack is empty\n");
    }
    else{
        printf("\nElement removed: %d\n",a[(*front)]);
        (*front)++;
    }
}
void Peek(int *a,int front,int rear){
    if(front>(rear-1) || front==-1){
        printf("\nStack is empty\n");
    }
    else{
        printf("\nTop element: %d\n",a[rear-1]);
    }
}
void Display(int *a,int front,int rear){
    if(front>(rear-1) || front==-1){
        printf("\nStack is empty\n");
    }
    else{
        for(int i=front;i<rear;i++){
              printf("%d ",a[i]);
        }
    }
    printf("\n");
}
int main(){
    int a[10],front=-1,rear=-1,c;
    while(1){
         printf("\nQueue Operation\n");
         printf("1.Enqueue\n2.Dequeue\n3.Peek\n");
         printf("4.Display\n5.Exit\n");
         scanf("%d",&c);
         switch(c){
             case 1: Enqueue(a,&front,&rear);
                     break;
             case 2: Dequeue(a,&front,&rear);
                     break;
             case 3: Peek(a,front,rear);
                     break;
             case 4: Display(a,front,rear);
                     break;
             case 5: exit(0);
             default: printf("\nInvalid operation\n");
                      break;
         }
    }
    return 0;
}
