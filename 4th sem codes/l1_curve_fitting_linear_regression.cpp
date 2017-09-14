#include <iostream>
#include <cmath>

int main(){
    float Ex=0,Ey=0,Ex2=0,Exy=0,a,b;
    float *x,*y;
    int i,n;
    std::cout<<"Total no. of data:\t";
    std::cin>>n;
    x=new float[n];
    y=new float[n];
    for (i=0; i<n; ++i){
        std::cout<<"Enter x and y:\t";
        std::cin>>x[i]>>y[i];
    }
    for (int i=0; i<n; ++i){
        Ex+=x[i];
        Ey+=y[i];
        Ex2+=pow(x[i],2);
        Exy+=x[i]*y[i];
    }
    a=(Ey*Ex2-Exy*Ex)/(n*Ex2-Ex*Ex);
    b=(n*Exy-Ex*Ey)/(n*Ex2-Ex*Ex);
    std::cout<<"y = "<<a<<" + ("<<b<<")x";
    delete x;
    delete y;

    return 0;
}
