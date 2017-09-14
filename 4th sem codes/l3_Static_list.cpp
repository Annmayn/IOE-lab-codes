#include <iostream>

#define SIZE 20

template <class T>
class List{
private:
    T arr[SIZE];
    int last;
public:
    List(){
        last=-1;
    }

    void moveLeft(int pos){
        for (int i=pos-1; i<last; ++i){
            arr[i]=arr[i+1];
        }
        --last;
    }

    void moveRight(int pos){
        for(int i=last; i>=pos-1 ; --i){
            arr[i+1]=arr[i];
        }
        ++last;
    }

    void insert(T val){
        if (last!=SIZE-1){
            std::cout<<val<<" added to the list\n";
            arr[++last]=val;
        }
    }

    void insert(T val, int pos){
        if (pos==last+2){
            std::cout<<"\n"<<val<<" added to the list at position "<<pos<<"\n";
            arr[++last]=val;
        }
        else if (pos <= last+1){
            moveRight(pos);
            std::cout<<"\n"<<val<<" added to the list at position "<<pos<<"\n";
            arr[pos-1]=val;                         //position is greater than index by 1
        }
        else{
            std::cout<<"\nExceeded list size\n";
        }
    }

    void remove(){
        if (isEmpty())
            std::cout<<"\nList empty\n";
        else{
            std::cout<<"\n"<<arr[last]<<" removed from list\n";
            --last;
        }
    }

    void remove(int pos){
        if (pos>last+1)
            std::cout<<"\nCan't delete beyond the list\n";
        else if (pos==last+1){
            std::cout<<"\n"<<arr[last]<<" removed from list\n";
            --last;
        }
        else{
            std::cout<<"\n"<<arr[last]<<" removed from list\n";
            moveLeft(pos);
        }

    }

    void display(){
        std::cout<<"\nElements: ";
        for (int i=0; i<=last; ++i)
            std::cout<<arr[i]<<"  ";
    }

    void display(int pos){
        std::cout<<"\nElement at position "<<pos<<" : "<<arr[pos-1]<<std::endl;
    }

    bool isEmpty(){
        return (last==-1);
    }

    int length(){
        return (last+1);
    }
};

int main(){
    List<int> slist;
    slist.remove();
    slist.insert(1);
    slist.insert(3);
    slist.insert(4);
    slist.insert(6);
    slist.display(2);
    (slist.isEmpty())?std::cout<<"\nEmpty list\n":std::cout<<"\nList not empty\n";
    slist.insert(2,5);
    slist.display();
    slist.remove(5);
    slist.display();

    slist.insert(2,2);
    slist.insert(5,5);
    slist.display();

    return 0;
}
