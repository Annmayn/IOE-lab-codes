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
    sum = f(a)+f(b);
    h = (b-a)/n;
    for(int i = 1 ; i<n; i++){
        sum += 2*f(a+i*h);
        cout<<sum<<endl;
    }
    sum = sum * h/2;
    cout<<"the integration of the given function is "<<sum<<endl;
    return 0;
}

