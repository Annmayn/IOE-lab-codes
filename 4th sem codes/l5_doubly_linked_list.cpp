#include <iostream>
#include <cstdlib>

 typedef struct Node{
    int info;
    Node *next,*prev;
};

Node *start=NULL;

void first_insert(int val){
    Node *newNode=new Node();
    newNode->info=val;
    newNode->next=NULL;
    newNode->prev=NULL;
    if (start==NULL){
        start=newNode;
    }
    else{
        newNode->next=start;
        start->prev=newNode;
        start=newNode;
    }
}

void last_insert(int val){
    Node *newNode,*temp;
    newNode=new Node();
    newNode->info=val;
    newNode->next=NULL;
    newNode->prev=NULL;
    if (start==NULL){
        start=newNode;
    }
    else{
        temp=start;
        while (temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->prev=temp;
        std::cout<<start->info<<std::endl;
    }
}

void insert_at(int pos, int val){
    if (start==NULL)
        std::cout<<"No elements\n";
    else{
        bool finished=false;
        int cnt=1;
        Node *temp;
        temp=start;
        while (!finished){
            if (cnt==pos){
                temp->info=val;
                finished=true;
            }
            ++cnt;
            if (temp->next==NULL){
                std::cout<<"Beyond the list\n";
                finished=true;
            }
            temp=temp->next;

        }
    }
}

void insert_after(int pos, int val){
    if (start==NULL){
        std::cout<<"No elements\n";
    }
    else{
        int cnt=1;
        bool finished=false;
        Node *temp;
        temp=start;
        while(!finished){
            if (cnt==pos){
                Node *newNode;
                newNode=new Node();
                newNode->info=val;
                newNode->next=temp->next;
                (temp->next)->prev=newNode;
                newNode->prev=temp;
                temp->next=newNode;
                finished=true;
            }
            ++cnt;
            temp=temp->next;
        }
    }
}


void insert_before(int pos, int val){
    if (start==NULL){
        std::cout<<"No elements\n";
    }
    else if (pos==1){
        first_insert(val);
    }
    else{
        bool finished=false;
        int cnt=1;
        Node *temp,*tmp;
        temp=start;
        while(!finished){
            temp=temp->next;
            ++cnt;
            if (cnt==pos){      //insertion part here
                Node *newNode;
                newNode=new Node();
                newNode->info=val;
                newNode->next=temp;
                newNode->prev=temp->prev;
                (temp->prev)->next=newNode;
                temp->prev=newNode;
                finished=true;
            }
        }
    }
}


void remove_first(){
    if (start==NULL){
        std::cout<<"No elements\n";
    }
    else{
        Node *temp=start;
        start=start->next;
        delete temp;
    }
}

void remove_last(){
    if (start==NULL){
        std::cout<<"No elements\n";
    }
    else if (start->next==NULL){
        Node *tmp=start;
        start=NULL;
        delete tmp;
    }
    else{
        Node *tmp=start, *temp;
        while ((tmp->next)!=NULL)
            tmp=tmp->next;
        temp=tmp->prev;
        temp->next=NULL;
        delete temp;
    }
}

void remove_at(int pos){
    if (start==NULL){
        std::cout<<"No elements\n";
    }
    else if (start->next==NULL){
        if (pos==1)
            start=NULL;
        else
            std::cout<<"Beyond the list\n";
    }
    else{
        Node *temp,*tmp;
        temp=start;
        bool finished=false;
        int cnt=1;
        while (!finished){
            tmp=temp;
            temp=temp->next;
            if (temp==NULL){
                std::cout<<"Beyond the list\n";
            }
            ++cnt;
            if (cnt==pos){
                tmp->next=temp->next;
                tmp=temp->next;
                tmp->prev=temp->prev;
                delete temp;
                finished=true;
            }
        }
    }
}

void display(){
    if (start==NULL)
        std::cout<<"No elements\n";
    else{
        Node *temp;
        temp=start;
        std::cout<<"Elements : ";
        while (temp->next!=NULL){
            std::cout<< temp->info <<" ";
            temp=temp->next;
        }
        std::cout << temp->info << std::endl;

    }
}



int main(){
    first_insert(4);
    first_insert(7);
    first_insert(1);
    last_insert(5);
    display();
    insert_after(2,3);
    display();
    remove_at(2);
    display();
    insert_before(2,2);
    display();
//    remove_first();
//    display();
//    remove_last();
//    display();

    return 0;
}
