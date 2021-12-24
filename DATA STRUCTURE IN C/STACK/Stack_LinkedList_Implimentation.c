// Stack using linked list
#include<stdio.h>
#include<stdlib.h>
typedef struct St{
    int data;
    struct St *next;
}Stack;
Stack* insert(Stack *s,int key){
    Stack *p=(Stack*)malloc(sizeof(Stack));
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
Stack *Delete(Stack *s){
    if(s!=NULL){
        s=s->next;
        return s;
    }
    else{
        printf("\nStack is Empty\n");
        return NULL;
    }
}
void Peek(Stack *s){
    if(s!=NULL){
        printf("\nTop Element: ");
        printf("%d\n",s->data);
    }
    else{
        printf("\nStack is Empty\n");
    }
}
void Display(Stack *s){
    if(s==NULL){
        printf("\nStack is Empty\n");
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
   Stack *s=NULL;
   int c,k;
   while(1){
        printf("\nStack Operations\n");
        printf("1.Insert\n2.Delete\n3.Peek\n");
        printf("4.Display\n5.Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d",&c);
        switch(c){
        case 1: printf("\nEnter the number: ");
                scanf("%d",&k);
                s=insert(s,k);
                break;
        case 2: s=Delete(s);
                break;
        case 3: Peek(s);
                break;
        case 4: Display(s);
                break;
        case 5: exit(0);
        default: printf("\nEnter the valid choice\n");
                 break;
        }
   }
}
