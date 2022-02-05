//BST DELETION .........
#include<stdio.h>
#include<stdlib.h>
typedef struct tree 
{
    int data;
    struct tree* left,*right;
}Tree;
Tree* Succesor(Tree* a){
    a=a->right;
    while(a!=NULL&&a->left!=NULL){
        a=a->left;
    }
    return a;
}
Tree* Delete(Tree* a,int key){
    if(a==NULL){
        return NULL;
    }
    if(a->data > key){
        a->left=Delete(a->left,key);
    }
    else if(a->data <key){
        a->right=Delete(a->right,key);
    }
    else{
        
        if(a->left==NULL){
            Tree* b=(Tree*)malloc(sizeof(Tree));
            b=a->right;
            free(a);
            return b;
        }
        else if(a->right==NULL){
            Tree* b=(Tree*)malloc(sizeof(Tree));
            b=a->left;
            free(a);
            return b;
        }
        Tree* succ=Succesor(a);
        a->data=succ->data;
        a->right=Delete(a->right,succ->data);
    }
    return a;
}
Tree* insert(Tree *a ,int key){
    if(a==NULL){
        Tree* b=(Tree*)malloc(sizeof(int));
        b->data=key;
        b->left=b->right=NULL;
        a=b;
        return a;
    }
    else{
        if(a->data > key){
            a->left=insert(a->left,key);
        }
        else{
            a->right=insert(a->right,key);
        }
    }
    return a;
}
void Display(Tree* a){
    //printf("ABhsih");
    if(a!=NULL){
        Display(a->left);
        printf("%d ",a->data);
        Display(a->right);
    }
}
int main(){
    Tree *a=NULL;
    a=insert(a,45);
    a=insert(a,55);
    a=insert(a,15);
    a=insert(a,25);
    a=insert(a,65);
    a=insert(a,95);
    a=insert(a,35);
    Display(a);
    printf("\n\n");
    a=Delete(a,35);
    Display(a);

}
// int main(){
//     //printf("adb");
//     Tree* a=NULL;
//     a=(Tree*)malloc(sizeof(int));
//     a->data=5;
//     a->left=a->right=NULL;
//     //printf("adb");
//     Tree* b=(Tree*)malloc(sizeof(int));
//     b->data=6;
//     b->left=b->right=NULL;
//     a->right=b;
//     Tree* c=(Tree*)malloc(sizeof(int));
//     c->data=4;
//     c->left=c->right=NULL;
//     a->left=c;
//     Tree* d=(Tree*)malloc(sizeof(int));
//     d->data=8;
//     d->left=d->right=NULL;
//     b->right=d;
//     Tree* e=(Tree*)malloc(sizeof(int));
//     e->data=3;
//     e->left=e->right=NULL;
//     c->left=e;
    

//     Display(a);
//     return 0;
// }
