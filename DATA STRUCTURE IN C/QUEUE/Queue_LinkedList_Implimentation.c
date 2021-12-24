#include<stdio.h>
#include<stdlib.h>
typedef struct Que{
    int data;
    struct Que *next;
}Queue;
Queue* insert(Queue *s,int key){
    Queue *p=(Queue*)malloc(sizeof(Queue));
    p->data=key;
    p->next=NULL;
    if(s==NULL){
        s=p;
        return s;
    }
    p->next=s;
    s=p;
    return s;
}
Queue *Delete(Queue *s){
    if(s==NULL){
        printf("\nQueue is Empty\n");
        return NULL;
    }
    Queue *a=s;
    while(s->next->next!=NULL){
        s=s->next;
    }
    s->next=NULL;
    s=a;
    printf("\nDeleted !\n");
    return s;
}
void Top(Queue *s){
    if(s!=NULL){
        printf("Top element: ");
        printf("%d\n",s->data);
    }
    else{
        printf("\nQueue is Empty\n");
    }
}
void Display(Queue *s){
    if(s==NULL){
        printf("\nQueue is Empty\n");
    }
    else{
        printf("\nDisplaying element: ");
        while(s!=NULL){
            printf("%d ",s->data);
            s=s->next;
        }
        printf("\n");
    }
}
int main(){
   Queue *s=NULL;
   int c,k;
   while(1){
        printf("\nQueue Operations\n");
        printf("1.Insert\n2.Delete\n3.Top Element");
        printf("\n4.Display\n5.Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d",&c);
        switch(c){
        case 1: printf("\nEnter the number: ");
                scanf("%d",&k);
                s=insert(s,k);
                break;
        case 2: s=Delete(s);
                break;
        case 3: Top(s);
                break;
        case 4: Display(s);
                break;
        case 5: exit(0);
        default: printf("\nEnter the valid choice\n");
                 break;
        }
   }
}
