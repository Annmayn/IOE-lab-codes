#include <iostream>

using namespace std;

typedef struct BST{
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

BST* add(BST *root, int val){
    if (root==NULL){
        cout<<val<<" added\n";
        BST *temp= new BST();
        temp->info=val;
        temp->left=NULL;
        temp->right=NULL;
        root=temp;
        return root;
    }
    else{
        if (val < root->info){
            root->left=add(root->left, val);
        }
        else if (val > root->info){
            root->right=add(root->right, val);
        }
    }
}

BST *delnum(BST *root, int val){
    root->info=NULL;
    return root;
}

BST* remove(BST* root, int val){
    if (root==NULL){
        cout<<"No element\n";
        return root;
    }
    else if (val==root->info){
        if (root->left!=NULL and root->right==NULL){
            BST *tmp=root->left;
            if (tmp->left!=NULL)
                root->left=tmp->left;
            else if (tmp->right!=NULL)
                root->left=tmp->right;
            root=NULL;
            delete tmp;
        }
        else if (root->right!=NULL and root->left==NULL){
            BST *tmp=root->right;
            if (tmp->left!=NULL)
                root->right=tmp->left;
            else if (tmp->right!=NULL)
                root->right=tmp->right;
            delete tmp;
        }
        if (root->left==NULL and root->right==NULL){
            cout<<val<<" deleted\n";
            root=NULL;
            root=delnum(root,val);
            delete root;
            return root;
        }
    }
    else if (val < root->info){
        remove(root->left, val);
    }
    else if (val > root->info){
        remove(root->right, val);
    }
}

//void display(BST* root){
//    if (root!=NULL){
//        cout<<"\t"<<root->info<<endl;
//        display(root->left);
//        cout<<"\t";
//        display(root->right);
//    }
//}

void inorder(BST *root){
    if (root!=NULL){
        inorder(root->left);
        cout<<root->info<<"\t";
        inorder(root->right);
    }
}
int main(){
    BST* root=NULL;
    root=add(root,5);       //provide the root value to root
    add(root, 2);
    add(root,10);
    add(root,7);
    add(root,4);
    add(root,1);
    add(root,15);
    remove(root,15);
    cout<<"\nInorder traversal of the BST:\n";
    inorder(root);
    return 0;
}
