#include<iostream>
#include<cstdlib>
#include<stdexcept>
using namespace std;
template <class T>
class BinarySearchTree{
    struct Node{
        T data;
        Node* left;
        Node* right;
    };
    Node* root;
    public:
    BinarySearchTree(){
        root = NULL;
    }
    void insert(T data){
        Node* temp = new Node;
         if(temp == NULL)
            throw overflow_error("Overflow....");
        temp->data = data;
        temp->left = NULL;
        temp->right = NULL;
        if(root == NULL){
            root = temp;
            return;
        }

       Node* r = root;
        while(r!=NULL){
            if(data < r->data){
              //
                if(r->left == NULL){
                    r->left = temp;
                    break;
                }
                r = r->left;
                cout<<"Left insertion traversal...."<<endl;
            }
            else if( data > r->data){
               //
                if(r->right == NULL){
                    r->right = temp;
                    break;
                    }
                r = r->right;
                cout<<"Right insertion traversal...."<<endl;
            }
            else if ( data == r->data){
                cout<<"Duplicate data"<<endl;
                break;}
        }
    }

    void preorder(Node* tree){
        if(tree!=NULL){
            cout<<tree->data<<endl;
            preorder(tree->left);
            preorder(tree->right);
        }
    }

     void inorder(Node* tree){
        if(tree!=NULL){
            inorder(tree->left);
            cout<<tree->data<<endl;
            inorder(tree->right);
        }
    }
     void postorder(Node* tree){
        if(tree!=NULL){
            postorder(tree->left);
            postorder(tree->right);
            cout<<tree->data<<endl;
        }
    }
    void display(){
        cout<<"Preorder:"<<endl;
        preorder(root);
        cout<<"Postorder:"<<endl;
        postorder(root);
        cout<<"Inorder:"<<endl;
        inorder(root);
    }
    void find(T data){
        Node* child;
        Node* parent;
        child = root;
        if (child->data==data)
        {
            cout<<"Root node's data:"<<child->data<<endl;
            return;
        }
       // parent = child;
        while(child->data != data){
            parent = child;
            if(data < child->data)
                child = child->left;
            else if( data > child->data)
                child = child->right;
            if(child == NULL){
                cout<<"Value doesn't exist...."<<endl;
                return ;
            }

        }
         cout<<"Node data:"<<child->data<<endl;
        cout<<"Parent data:"<<parent->data<<endl;

//        cout<<"Left Child:"<<child->left->data<endl;
  //      cout<<"Right Child:"<<child->right->data<<endl;
        }
    void remove(T data){
        Node* child;
        Node* parent;
        //T data;
        child = root;
       // parent = child;
        while(child->data != data){
            parent = child;
            if(data < child->data)
                child = child->left;
            else if( data > child->data)
                child = child->right;

        }
       // Node* temp = child;
        //Deletion of node without a child.......
        if(child->left == NULL && child->right == NULL){
            delete child;
            parent->left == NULL;
            parent->right == NULL;
        }
        //Deletion of node with a single child......
        else if((child->left == NULL && child->right != NULL) || (child->left != NULL && child->right == NULL)){
            Node* temp;
            if(child->left != NULL)
                parent->left = child->left;
            else
                parent->right = child->right;
             delete child;
        }
        //Deletion of node with both child using method 1
        else if(child->left != NULL && child->right != NULL){
            parent->right = child->right;
            parent->right->left = child->left;
            delete child;
        }
        //Deletion of node with both child using method 2
   /*     else if(child->left != NULL && child->right != NULL){

        }*/
    }
    int smallest(Node* tree){
        if( tree->left == NULL)
            return tree->data;
        else
         return smallest(tree->left);
    }
    int greatest(Node* tree){
        if(tree->right == NULL)
            return tree->data;
        else
            return greatest(tree->right);
    }


};
int main(void){
    int choice,data;
    BinarySearchTree<int> t;
    cout<<"1.Insert"<<endl;
    cout<<"2.Find"<<endl;
    cout<<"3.Delete"<<endl;
    cout<<"4.Display"<<endl;
    cout<<"5.Exit"<<endl;
    while(1)
    {
        cout<<"Enter your choice: ";cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Ënter data: ";cin>>data;
            t.insert(data);
            break;
        case 2:
            cout<<"Enter value: ";cin>>data;
            t.find(data);
            break;
        case 3:
            cout<<"Enter data: ";cin>>data;
            t.remove(data);
            break;
        case 4:
            t.display();
            break;
        case 5:
            exit(2);
            break;
        default:
            cout<<"Invalid choice!!"<<endl;
            break;
        }
    }
    //t.insert(10);
    //t.insert(9);
    //t.insert(15);
    //t.insert(7);
    //t.insert(6);
    //t.insert(20);
    //t.insert(26);
    //t.insert(14);
    //t.insert(12);
    //t.find(15);
    //t.remove(15);
    //t.display();t.find(15);
    return 0;
}
