#include <stdio.h>
#include <stdlib.h>
void Push(int *a,int *top){
    (*top)++;
    if(*(top)>=10){
        printf("\nStack is full\n");
        return ;
    }
    printf("\nEnter the element to be insert: ");
    scanf("%d",&a[*(top)]);
}
void Pop(int *a,int *top){
    if(*(top)<0){
        printf("\nStack is empty\n");
        return ;
    }
    printf("\nElement removed: %d\n",a[*(top)]);
    a[*(top)]=0;
    (*top)--;
}
void Peek(int *a,int top){
    if(a==NULL){
        printf("\nStack is empty\n");
        return;
    }
    printf("\nTop Element: %d\n",a[top]);
}
void Display(int *a,int top){
    if(top==-1){
        printf("\nStack is empty\n");
        return;
    }
    printf("\nDisplaying the element: ");
    for(int i=top;i>=0;i--){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main()
{
    int a[10],choose,top=-1;
    while(1){
        printf("\nStack Operations:\n");
        printf("\t1.Push\n\t2.Pop\n");
        printf("\t3.Peek\n\t4.Display\n\t5.Exist\n");
        printf("\nEnter your choice: ");
        scanf("%d",&choose);
        switch(choose){
            case 1: Push(a,&top);
                    break;
            case 2: Pop(a,&top);
                    break;
            case 3: Peek(a,top);
                    break;
            case 4: Display(a,top);
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