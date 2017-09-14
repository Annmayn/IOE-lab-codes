#include <iostream>

template <class T>
class Queue{
private:
    int front,rear,elements;
    int len;
    T *arr;
public:
    Queue(int num){
        elements=0;
        len=num;
        front=0;
        rear=-1;
        arr=new T[num];
    }

    void enqueue(T val){
        if (rear==len-1 and front!=0)
            rear=-1;
        if (elements==0){               //empty queue
            arr[++rear]=val;
            std::cout<<val<<" stored in queue\n";
            ++elements;
        }
        else if(rear < len-1 and elements!=len){      //only when queue is not full
            arr[++rear]=val;
            std::cout<<val<<" stored in queue\n";
            ++elements;
        }
        else{
            std::cout<<"\nQueue full\n";
        }
    }
    void dequeue(){
        if (front==len and elements!=0)
            front=0;
        if (elements==0){
            std::cout<<"\nQueue empty\n";
        }
        else{
            --elements;
            std::cout<<arr[front]<<" removed from queue\n";
            ++front;
        }

    }
    T peek(){
        if (elements==0)
            std::cout<<"\nQueue empty\n";
        else
            return arr[front];
    }
    bool isEmpty(){
        return (elements==0);
    }

    bool isFull(){
        return (elements==len);
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
    mem.enqueue(5);

    mem.dequeue();
    mem.dequeue();
    mem.dequeue();
    mem.dequeue();

    return 0;
}
