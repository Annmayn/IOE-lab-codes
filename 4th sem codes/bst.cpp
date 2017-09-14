#include <iostream>

using namespace std;

class bst{
    private:
        struct node{
            int key;
            node* left;
            node* right;
            node(int data):key(data),left(NULL),right(NULL){}
        }*root;
        void preorder(node* tree){
            if(tree!=NULL){
                cout<<tree->key<<"   ";
                preorder(tree->left);
                preorder(tree->right);
            }
        }
        void inorder(node* tree){
            if(tree!=NULL){
                inorder(tree->left);
                cout<<tree->key<<"   ";
                inorder(tree->right);
            }
        }
         void postorder(node* tree){
            if(tree!=NULL){
                postorder(tree->left);
                postorder(tree->right);
                cout<<tree->key<<"   ";
            }
        }
        void insertnode(node* &tree, int value){
            if (tree == 0) {
                node *new_node = new node(value);
                tree = new_node;
            }
            else if (value < tree->key) {
                insertnode(tree->left, value);
            }
            else if(value > tree->key){
                insertnode(tree->right, value);
            }
            else{
                cout<<"duplicate key"<<endl;
                return;
            }
        }
        int maxHeight(node* tree){
            int height_right, height_left;
            if(tree == NULL)
                return 0;
            if(tree->left == NULL & tree->right == NULL)
                return 1;
            height_left = maxHeight(tree->left);
            height_right = maxHeight(tree->right);
            if(height_left>height_right)
                return height_left +1;
            else
                return height_right+1;
        }
        node* Search(node* tree, int value){
            if(tree == NULL){
                cout<<"Could not find the value"<<endl;
                return tree;
            }
            if(tree->key == value)
                return tree;
            else if(value<tree->key)
                return Search(tree->left, value);
            else
                return Search(tree->right, value);
        }
        void Erase(node* &tree, int value){
            if(tree == NULL){
                cout<<"Could not find node"<<endl;
                return;
            }
            else if(value<tree->key)
                Erase(tree->left, value);
            else if(value>tree->key)
                Erase(tree->right, value);
            else if(tree->left != NULL && tree->right != NULL){
                node* temp = tree->left;
                node* pretemp = temp;
                while(temp->right != NULL)
                    temp = temp->right;
                tree->key = temp->key;
                delete temp;
                if(pretemp == temp)
                    tree->left = NULL;
                else
                    pretemp->right = NULL;
            }
            else{
                node* temp = tree;
                if(tree->left == NULL && tree->right ==  NULL)
                    tree = NULL;
                else if(tree->left != NULL){
                    tree = tree->left;
                    delete temp;
                }
                else if(tree->right != NULL){
                    tree= tree->right;
                    delete temp;
                }
            }
        }
    public:
        bst(){
            root = NULL;
        }
        void add(int val){
            insertnode(root , val);
        }
        void display(){
            if(root == NULL){
                cout<<"the tree is empty"<<endl;
                return;
            }
            cout<<"Preorder:"<<endl;
            preorder(root);
            cout<<endl;
            cout<<"Postorder:"<<endl;
            postorder(root);
            cout<<endl;
            cout<<"Inorder:"<<endl;
            inorder(root);
            cout<<endl;
        }
        int height(){
            return maxHeight(root);
        }
        int smallest(){
            if(root == NULL)
                cout<<"The tree is empty"<<endl;
            else{
                node* temp = root;
                while(temp->left != NULL)
                    temp = temp->left;
                return temp->key;
            }
        }
        int largest(){
            if(root == NULL)
                cout<<"The tree is empty"<<endl;
            else{
                node* temp = root;
                while(temp->right != NULL)
                    temp = temp->right;
                return temp->key;
            }
        }
        void nodeSearch(int value){
            if(root == NULL){
                cout<<"The tree is empty"<<endl;
                return;
            }
            node* new_node;
            new_node = Search(root,value);
            if(new_node != NULL)
                cout<<"Key found: "<<new_node->key<<endl;
        }
        void deletion(int value){
            if(root == NULL){
                cout<<"The tree is empty"<<endl;
                return;
            }
            Erase(root, value);
        }
};

int main(){
    bst bs;
    int arr[11] = {8,15,6,3,12,16,2,4,18,13,7};
    for(int i= 0;i<11;i++)
       bs.add((arr[i]));
    bs.display();

    bs.nodeSearch(8);
    bs.deletion(18); // deletion of leaf
    bs.deletion(12); // deletion of node with one right child only
    bs.deletion(4);
    bs.deletion(3); // deletion of node with one left child only
    bs.deletion(8);
    bs.display();
    return 0;
}
