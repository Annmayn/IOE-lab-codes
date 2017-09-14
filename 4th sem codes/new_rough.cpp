#include <iostream>
using namespace std;

void dothis(int &a){
    a=5;
}

int main(){
    int a=2;
    dothis(a);
    cout<<a;
    return 0;
}
