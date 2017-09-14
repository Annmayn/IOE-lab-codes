#include <iostream>

#define SIZE 20

template <class T>
class List{
private:
    T arr[SIZE];
    int rear, front;
public:
    List(){
        rear=-1;
        front=0;
    }

    void enqueue(T val){
        if (rear!=SIZE-1){
            std::cout<<val<<" added to the queue\n";
            arr[++rear]=val;
        }
    }

    void dequeue(){
        if (isEmpty())
            std::cout<<"Empty\n";
        else{
            std::cout<<"Dequeue called\n";
            ++front;
        }
    }

    void display(){
        std::cout<<"Elements: ";
        for (int i=front; i<=rear; ++i)
            std::cout<<arr[i]<<"  ";
        std::cout<<"\n";
    }

    bool isEmpty(){
        return (rear==-1);
    }

    int length(){
        return (rear+1);
    }
};

int main(){
    int ans,val;
    bool finished=false;
    List<int> Queue;
    std::cout<<"\n----------------------------------\n";
    std::cout<<"\nSelection menu:\n\n1. Enqueue\n2. Dequeue\n3. Display elements\n4. Quit\n";
    std::cout<<"----------------------------------\n";
    while (!finished){
        std::cin>>ans;
        switch (ans){
        case 1:
            std::cout<<"Enter value to be enqueued:\t";
            std::cin>>val;
            Queue.enqueue(val);
            break;
        case 2:
            Queue.dequeue();
            break;
        case 3:
            Queue.display();
            break;
        case 4:
            finished=true;
            break;
        default:
            std::cout<<"Enter valid selection\n";
        }

    }

    return 0;
}
