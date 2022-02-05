//BST INSERTION AND TRAVERSAL......
#include<stdio.h>
#include<stdlib.h>
typedef struct Tree{
    int data;
    struct Tree* left,*right;
}Tree;

Tree* insert(Tree* head,int key){
    if(head==NULL){
        Tree* link=(Tree*)malloc(sizeof(Tree));
        link->data=key;
        link->left=link->right=NULL;
        head=link;
        return head;
    }
    if(head->data > key){
        head->left=insert(head->left,key);
    }
    else{
        head->right=insert(head->right,key);
    }
    return head;
}
void PreorderDisplay(Tree* head){
    if(head!=NULL){
        printf("%d ",head->data);
        PreorderDisplay(head->left);
        PreorderDisplay(head->right);
    }
}
void InorderDisplay(Tree* head){
    if(head!=NULL){
        InorderDisplay(head->left);
        printf("%d ",head->data);
        InorderDisplay(head->right);
    }
}
void PostorderDisplay(Tree* head){
    if(head!=NULL){
        PostorderDisplay(head->left);
        PostorderDisplay(head->right);
        printf("%d ",head->data);
    }
}

int main(){
    Tree* head=NULL;
    head=insert(head,45);
    head=insert(head,55);
    head=insert(head,85);
    head=insert(head,15);
    head=insert(head,65);
    head=insert(head,35);
    head=insert(head,75);
    head=insert(head,25);
    PreorderDisplay(head);
    printf("\n\n");
    InorderDisplay(head);
    printf("\n\n");
    PostorderDisplay(head);
    
}