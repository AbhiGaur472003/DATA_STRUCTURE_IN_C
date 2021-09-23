#include <stdio.h>
#include <stdlib.h>
struct node{
     int data;
     struct node *next;
};

void display(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }

}
int main()
{
    struct node *first=(struct node*)malloc(sizeof(struct node));
    struct node *secound=(struct node*)malloc(sizeof(struct node));
    struct node *third=(struct node*)malloc(sizeof(struct node));
    struct node *fourth=(struct node*)malloc(sizeof(struct node));

    first->data=34;
    first->next=secound;

    secound->data=94;
    secound->next=third;

    third->data=86;
    third->next=fourth;

    fourth->data=6397;
    fourth->next=NULL;

    display(first);
    return 0;
}
