#include <iostream>
#include <cmath>
#include <iomanip>

float functy(float x, float y, float z){
    return (6*x+4*x*x*x);       // dy/dx here
}

float functz(float x, float y, float z){
    return (6+12*x*x);       //  dz/dx here
}

int main(){
    float x,b,h,k1,k2,k3,k4,l1,l2,l3,l4,k,l,y,z, fy,fz;
    bool finished=false;
    std::cout<<"Enter the values of range, step size, initial values of y and z:\n";
    std::cin>>x>>b>>h>>y>>z;
    std::cout<<h<<std::endl;
    std::cout<<"x\ty\tz"<<std::endl;
    while (!finished){
        if (x==b or x+h>b){
            finished=true;
            break;
        }
        k1=h*functy(x,y,z);
        l1=h*functz(x,y,z);

        k2=h*functy(x+h/2,y+k1/2,z+l1/2);
        l2=h*functz(x+h/2,y+k1/2,z+l1/2);

        k3=h*functy(x+h/2,y+k2/2,z+l2/2);
        l3=h*functz(x+h/2,y+k2/2,z+l2/2);

        k4=h*functy(x+h,y+k3,z+l3);
        l4=h*functz(x+h,y+k3,z+l3);

        k=(k1+2*k2+2*k3+k4)/6;
        l=(l1+2*l2+2*l3+l4)/6;

        x=x+h;
        y=y+k;
        z=z+l;

        std::cout<<std::setprecision(5)<<x<<"\t"<<y<<"\t"<<z<<std::endl;
    }
    return 0;
}
