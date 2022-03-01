#include<stdio.h>
typedef struct BinaryRightView
{
    int data;
    struct BinaryRightView* left,*right;
}Tree;


void rightView(TreeNode* root, vector<int>& view, int level) {
        if (!root) {
            return;
        }
        if (view.size() == level) {
            view.push_back(root -> val);
        }
        rightView(root -> right, view, level + 1);
        rightView(root -> left, view, level + 1);
}
vector<int> rightSideView(TreeNode* root) {
         vector<int> view;
        rightView(root, view, 0);
        return view;
}
int main(){
    Tree* head=(Tree*)malloc(sizeof(Tree));
    head->data=78;
    
    Tree* h1=(Tree*)malloc(sizeof(Tree));
    h1->data=48;
    head->left=h1;

    Tree* h2=(Tree*)malloc(sizeof(Tree));
    h2->data=38;
    head->right=h2;

    Tree* h3=(Tree*)malloc(sizeof(Tree));
    h3->data=88;
    h1->left=h3;
    h1->right=h3->left=h3->right=NULL;

    Tree* h4=(Tree*)malloc(sizeof(Tree));
    h4->data=71;
    h2->right=h4;
    h4->left=h4->right=NULL;

    Tree* h5=(Tree*)malloc(sizeof(Tree));
    h5->data=42;
    h2->left=h5;

    Tree* h6=(Tree*)malloc(sizeof(Tree));
    h6->data=56;
    h5->left=h6;

    Tree* h7=(Tree*)malloc(sizeof(Tree));
    h7->data=57;
    h5->right=h7;

    h6->left=h6->right=h7->left=h7->right=NULL;
}