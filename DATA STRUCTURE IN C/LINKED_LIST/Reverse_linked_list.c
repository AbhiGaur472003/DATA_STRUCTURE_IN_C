#include <stdio.h>
#include <stdlib.h>
struct ListNode{
    int number;
    struct node *next;
};
struct ListNode* reverseList(struct ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        struct ListNode *prev=NULL;
        struct ListNode *forw=NULL;
        while(head!=NULL){
            forw=head->next;
            head->next=prev;
            prev=head;
            head=forw;
        }
        head=prev;
        return head;
    }
int main()
{
    int n;
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    struct ListNode first[n];
    struct ListNode *ptr;
    ptr=first;
    int i,a;
    printf("\nEnter the element of Linked list: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        first[i].number=a;
        first[i].next=&first[i+1];
    }
    first[i-1].next=NULL;
    printf("\nLinked List before reversing: ");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->number);
        ptr=ptr->next;
    }
    ptr=reverseList(first);
    printf("\nLinked List after reversing: ");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->number);
        ptr=ptr->next;
    }
    return 0;
}

