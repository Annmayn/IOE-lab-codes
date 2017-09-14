#include <iostream>

std::string expression;

template <class T>
class Stack{
private:
    int top, len;
    T *arr;
public:
    Stack(int num){
        arr=new T[num];
        len=num;
        top=-1;
    }

    void push(T val){
        if (top < len-1){
            arr[++top]=val;
        }
    }

    void pop(){
        if (top>-1){
            expression+=arr[top--];
        }
    }

    T peek(){
        if (top>-1)
            return arr[top];
        return NULL;
    }

    void skip(){
        if (top!=-1)
            --top;
    }

    bool isEmpty(){
        if (top==-1)
            return true;
        return false;
    }

    ~Stack(){
        delete arr;
    }
};

int priority(char tst){
    if (tst=='+' or tst=='-')
        return 1;
    else if (tst=='*' or tst=='/')
        return 2;
    return 0;
}

bool isOperand(char tst){
    if( (tst>=0 and tst<=9) or (tst>='a' and tst<='z') ){
        return true;
    }
    return false;
}

bool isOperator(char tst){
    if (tst=='+' or tst=='-' or tst=='*' or tst=='/'){
        return true;
    }
    return false;
}

bool popValue(char scan, char stck){
    int sc,st;
    sc=priority(scan);
    st=priority(stck);
    if (sc>st)
        return false;
    return true;
}

int main(){
    int i;
    bool finished;
    std::string input;
    std::cout<<"Enter expression:\n";
    std::cin>>input;

    Stack<char> mem(3);

    for (i=0; i<input.length(); ++i){
        if (isOperand(input[i]) ){
            expression+=input[i];
        }
        else if (input[i]=='(')
            mem.push(input[i]);
        else if(isOperator(input[i])){
            if (mem.isEmpty()){
                mem.push(input[i]);
            }
            else{
                finished=false;
                while (!finished){
                    if (mem.isEmpty()){
                        mem.push(input[i]);
                        finished=true;

                    }
                    else if (popValue(input[i],mem.peek())){
                        mem.pop();
                    }
                    else{
                        mem.push(input[i]);
                        finished=true;
                    }
                }
            }
        }

        else if (input[i]==')'){
            finished=false;
            while (!finished){
                if (mem.isEmpty() or mem.peek()=='('){
                    finished=true;
                    mem.skip();
                }
                else{
                    mem.pop();
                }

            }
        }


        }

    while (!mem.isEmpty()){
            mem.pop();
        }
    std::cout<<std::endl;
    for (i=0; i<expression.length(); ++i){
        std::cout<<expression[i];
    }

    return 0;
}
