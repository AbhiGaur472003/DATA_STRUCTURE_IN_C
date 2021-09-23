//Implementation of Stack using Array.
#include <stdio.h>
#include <stdlib.h>
int a[10],choose,top=-1;
void Push(){
    top++;
    if(top>=10){
        printf("\nStack is full\n");
        return ;
    }
    printf("\nEnter the element to be insert: ");
    scanf("%d",&a[top]);
}
void Pop(){
    if(top<0){
        printf("\nStack is empty\n");
        return ;
    }
    printf("\nElement removed\n");
    a[top]=0;
    top--;
}
void Display(){
    printf("\nDisplaying the element: ");
    for(int i=0;i<=top;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main()
{
    printf("Enter your choices:\n");
    printf("\t1.Push\n\t2.Pop\n\t3.Display\n\t4.Exist\n");
    while(1){
        printf("\nEnter your choice: ");
        scanf("%d",&choose);
        switch(choose){
            case 1: Push();
                    break;
            case 2: Pop();
                    break;
            case 3: Display();
                    break;
            case 4: exit(0);
                    break;
        }
        if(choose==4){
            break;
        }
    }
    return 0;
}
