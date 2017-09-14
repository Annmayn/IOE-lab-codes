#include <iostream>

using namespace std;

struct BST{
    int info;
    BST *left, *right;
};

int max_val(BST *root, int tmp){
    int val;
    while (root->right!=NULL)
        root=root->right;
    val=root->info;
    root->info=tmp;
    return val;
}

int min_val(BST *root, int tmp){
    int val;
    while (root->left!=NULL)
        root=root->left;
    val=root->info;
    root->info=tmp;
    return val;
}

BST* insertinempty(int val){
    BST *temp=new BST();
    temp->info=val;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

BST* insertnode(BST *root, int val){
    if (root==NULL){
        root=insertinempty(val);
    }
    else if (val < root->info){
        root->left=insertnode(root->left, val);
    }
    else if (val > root->info){
        root->right=insertnode(root->right, val);
    }
    return root;
}

BST* removenode(BST *root, int val){
    BST *parent=findParent(root);
    if (root==NULL)
        cout<<"Not found\n";
    else if (val < root->info)
        removenode(root->left, val);
    else if (val > root->info)
        removenode(root->right, val);
    else{                                   //root->info == val
        if (tree->left != NULL and tree->right ==NULL){
        BST *temp;
        temp=max_val(tree->left);
        BST *pretemp=tree->left;
        tree->key = temp->key;
        }
    }
}

void inorder(BST *root){
    if (root!=NULL){
        inorder(root->left);
        cout<<root->info<<"\t";
        inorder(root->right);
    }
}

int main(){
    BST *tree=NULL;
    tree=insertnode(tree,5);
    tree=insertnode(tree,10);
    tree=insertnode(tree,3);
    tree=insertnode(tree,2);
    tree=insertnode(tree,1);
    tree=insertnode(tree,12);
    inorder(tree);

    return 0;
}
