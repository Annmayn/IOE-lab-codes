#include <iostream>

template <class T>
class Queue{
private:
    int front,rear;
    int len;
    T *arr;
public:
    Queue(int num){
        len=num;
        front=0;
        rear=-1;
        arr=new T[num];
    }

    void enqueue(T val){
        if (rear < len-1){
            arr[++rear]=val;
            std::cout<<arr[rear]<<" stored in queue\n";
        }
        else{
            std::cout<<"\nQueue full\n";
        }
    }
    void dequeue(){
        if (front==rear+1){
            std::cout<<"\nQueue empty\n";
        }
        else{
            std::cout<<arr[front]<<" removed from queue\n";
            front++;        //increase the index to simulate removing element
        }

    }
    T peek(){
        if (front==rear+1)
            std::cout<<"\nQueue empty\n";
        else
            return arr[front];
    }
    bool isEmpty(){
        if (front==rear+1)
            return true;
        return false;
    }

    bool isFull(){
        if (rear>=len-1)
            return true;
        return false;
    }
    ~Queue(){
        delete arr;
    }
};

int main(){
    std::string ans;
    Queue<int> mem(3);
    mem.dequeue();

    mem.enqueue(1);
    mem.enqueue(2);
    mem.enqueue(3);
    mem.enqueue(4);

    mem.dequeue();
    mem.dequeue();
    mem.dequeue();
    mem.dequeue();

    return 0;
}
