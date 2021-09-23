//Implementation of Stack using pointers.
#include <stdio.h>
#include <stdlib.h>
int *a=NULL,choose,top=-1;
void Push1(){
    int *ptr=NULL;
    if(a==NULL){
        ptr=(int *)calloc(1,sizeof(int));
    }
    else{
        ptr=(int *)realloc(a,sizeof(int)*top+1);
    }
    if(ptr==NULL){
        printf("\nNo more memory is available currently .\n");
    }
    else{
        top++;
        a=ptr;
        printf("\nEnter the element to be insert: ");
        scanf("%d",&a[top]);
    }
}
void Pop1(){
    int *ptr=NULL;
    if(a==NULL){
        printf("\nStack is empty element can't be removed\n");
        return ;
    }
    else{
        top--;
        if(top!=-1){
            ptr=(int *)realloc(a,sizeof(int)*top);
            a=ptr;
        }
        printf("\nElement removed\n");
    }
}
void Peek1(){
    if(a==NULL){
        printf("\nStack is empty\n");
    }
    else{
        printf("\nLast inserted element: %d\n",a[top]);
    }
}
void Display1(){
    if(top==-1){
        printf("\nStack is empty\n");
    }
    else{
        printf("\nDisplaying the element: ");
        for(int i=top;i>-1;i--){
            printf("%d ",a[i]);
        }
        printf("\n");
    }
}
int main()
{
    printf("Enter your choices:\n");
    printf("\t1.Push\n\t2.Pop\n\t3.Peek\n\t4.Display\n\t5.Exist\n");
    while(1){
        printf("\nEnter your choice: ");
        scanf("%d",&choose);
        switch(choose){
            case 1: Push1();
                    break;
            case 2: Pop1();
                    break;
            case 3: Peek1();
                    break;
            case 4: Display1();
                    break;
            case 5: exit(0);
                     break;
        }
        if(choose==5){
            break;
        }
    }
    return 0;
}

