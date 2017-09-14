#include <iostream>

template <class T>
class Stack{
private:
    int top, len;
    T *arr;
public:
    Stack(int num){
        arr=new int[num];
        len=num;
        top=-1;
    }


    void push(T val){
        if (top < len-1){
            arr[++top]=val;
        }
        else{
            std::cout<<"Stack full"<<std::endl;
        }
    }

    T pop(){
        if (top>-1){
            return arr[top--];
        }
        else{
            std::cout<<"\nStack empty"<<std::endl;
            return NULL;
        }
    }

    T peek(){
        if (top>-1)
            return arr[top];
        else{
            std::cout<<"\nStack empty"<<std::endl;
        }
    }


    ~Stack(){
        delete arr;
    }
};

int main(){
    Stack<int> mem(2);

    mem.push(1);
    mem.push(2);
    mem.push(3);
    std::cout<<"\n"<<mem.pop();
    std::cout<<"\n"<<mem.peek();
    std::cout<<"\n"<<mem.pop();
    std::cout<<"\n"<<mem.pop();

    return 0;
}
