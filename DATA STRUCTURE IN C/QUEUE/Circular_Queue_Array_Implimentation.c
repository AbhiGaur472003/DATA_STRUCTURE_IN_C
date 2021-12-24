#include<stdio.h>
int a[10],front=-1,rear=-1;
int count=0;
void Enqueue(){
    if(front==-1){
       front++;
       rear++;
    }
    if(count==10){
          printf("\nStack is full\n");
          return ;
    }
    else{
          printf("\nEnter the element to inserted: ");
          scanf("%d",&a[rear]);
          rear=(rear+1)%sizeof(a);
          count++;
    }
}
void Dequeue(){
    if(count==0)
         printf("\nStack is empty\n");
    else{
        printf("\nElement removed: %d\n",a[front]);
        front++;
        count--;
    }
}
void Peek(){
    if(count==0)
         printf("\nStack is empty\n");
    else{
        printf("\nTop element: %d\n",a[rear-1]);
    }
}
void Display(){
    if(count==0){
        printf("\nStack is empty\n");
        return ;
    }
    else{
        printf("\nDisplaying Elements: ");
        if(front>=rear){
            if(count==10){
                for(int i=front;i<10;i++){
                    printf("%d ",a[i]);
                }
                for(int i=0;i<rear;i++){
                    printf("%d ",a[i]);
                }
            }
            else{
                for(int i=front;i<rear;i++){
                    printf("%d ",a[i]);
                }
            }
        }
        else{
            for(int i=front;i<rear;i++){
                 printf("%d ",a[i]);
            }
        }
    }
    printf("\n");
}
int main(){
    int c;
    while(1){
         printf("\nQueue Operation:\n1.Enqueue\t2.Dequeue");
         printf("\t3.Peek\t4.Display\t5.Exit\n");
         printf("\nEnter your choices: ");
         scanf("%d",&c);
         switch(c){
             case 1: Enqueue();
                     break;
             case 2: Dequeue();
                     break;
             case 3: Peek();
                     break;
             case 4: Display();
                     break;
             case 5: break;
             default: printf("\nInvalid operation\n");
                      break;
         }
         if(c==5){
             break;
         }
    }
    return 0;
}
