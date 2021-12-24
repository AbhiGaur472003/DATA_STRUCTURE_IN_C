//Implementation of Stack using pointers.
//C program to Implementation Stack using dynamic array.
#include <stdio.h>
#include <stdlib.h>
int* Push(int *a,int *top){
    int *ptr=NULL;
    if(a==NULL){
        ptr=(int *)calloc(1,sizeof(int));
    }
    else{
        ptr=(int *)realloc(a,sizeof(int)*((*top)+1));
    }
    if(ptr==NULL){
        printf("\nNo more memory is available currently .\n");
    }
    else{
        (*top)+=1;
        a=ptr;
        printf("\nEnter the element to be insert: ");
        scanf("%d",&a[(*top)]);
    }
    return a;
}
int* Pop(int *a,int *top){
    int *ptr=NULL;
    if(a==NULL || (*top)==0){
        printf("\nStack is empty element can't be removed\n");
        return ;
    }
    else{
        printf("\nElement removed : %d\n",a[(*top)]);
        (*top)--;
        if((*top)!=-1){
            ptr=(int *)realloc(a,sizeof(int)*(*top));
            a=ptr;
        }
    }
    return a;
}
void Peek(int *a,int top){
    if(top==0){
        printf("\nStack is empty\n");
    }
    else{
        printf("\nLast inserted element: %d\n",a[top]);
    }
}
void Display(int *a,int top){
    if(top==0){
        printf("\nStack is empty\n");
    }
    else{
        printf("\nDisplaying the element: ");
        for(int i=top;i>0;i--){
            printf("%d ",a[i]);
        }
        printf("\n");
    }
}
int main()
{
    printf("NAME - ABHISHEK GAUR\nI'D - 200111135\nSEC - B\n");
    int *a=NULL,choose,top=0;
    while(1){
        printf("\nStack Operations:\n1.Push\t2.Pop");
        printf("\t3.Peek\t4.Display\t5.Exist\n");
        printf("\nEnter your choice: ");
        scanf("%d",&choose);
        switch(choose){
            case 1: a=Push(a,&top);
                    break;
            case 2: a=Pop(a,&top);
                    break;
            case 3: Peek(a,top);
                    break;
            case 4: Display(a,top);
                    break;
            case 5: exit(0);
            default: printf("\Invalid option\n");
				     break;
        }
    }
    return 0;
}
