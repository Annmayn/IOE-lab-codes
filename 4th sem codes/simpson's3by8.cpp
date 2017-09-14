#include <iostream>
#include <cstdlib>

using namespace std;

float f(float x){
    return 1/(1+x*x);
}
int main(){
    float a,b,sum,h;
    cout<<"enter the first and last state:"<<endl;
    cin>>a>>b;
    cout<<"enter the number of division lines:"<<endl;
    int n;
    cin>>n;
    if(n%3 != 0){
        cout<<"error n is not divisible by 3"<<endl;
        exit(1);
    }
    sum = f(a)+f(b);
    h = (b-a)/n;
    for(int i = 1 ; i<n; i++){
        if (i%3 == 0)
            sum += 2*f(a+i*h);
        else
            sum += 3*f(a+i*h);
    }
    sum = sum *3*h/8;
    cout<<"the integration of the given function is "<<sum<<endl;
    return 0;
}

