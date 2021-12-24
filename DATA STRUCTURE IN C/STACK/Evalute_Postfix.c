#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct fix{
    int size;
    int top;
    char *ar;
};

struct fix* createstack(int s){
    struct fix* stack=(struct fix*)malloc(sizeof(struct fix));
    if(!stack)
        return NULL;
    stack->top=-1;
    stack->size=s;
    stack->ar=(int*)malloc(stack->size*sizeof(int));
    if(!stack->ar)
        return NULL;
    return stack;
};
int isEmpty(struct fix* stack){
    return stack->top == -1 ;
}
int pop(struct fix* stack){
    if(!isEmpty(stack))
        return stack->ar[stack->top--];
    return 0;
};
void push(struct fix* stack,char a){
    stack->top++;
    stack->ar[stack->top]=a;
}
int EvaluatePostfix(char* s){
    struct fix* stack=createstack(strlen(s));
    if(!stack)
        return -1;
    for(int i=0;i<strlen(s);i++){
        if(isdigit(s[i])){
            push(stack,s[i]-'0');
        }
        else{
            int a=pop(stack);
            int b=pop(stack);
            switch(s[i]){
                case '+': push(stack,b+a);
                          break;
                case '-': push(stack,b-a);
                          break;
                case '*': push(stack,a*b);
                          break;
                case '/': push(stack,a/b);
                          break;
                case '%': push(stack,a%b);
                          break;
            }
        }
    }
    return pop(stack);
}
int main()
{
    char* s="45+45*+";
    int a=EvaluatePostfix(s);
    printf("NAME - ABHISHEK GAUR\nSTUDENT I'D - 200111135\nSEC - B\n");
    printf("\nCALCULATION : %d",a);
    return 0;
}
