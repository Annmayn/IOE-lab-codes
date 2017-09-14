#include <iostream>
#include <iomanip>
#include <cmath>

float compute(float x, float y){
    return (x+y)*sin(x*y);
}

int main(){
    float x,b,y,h,fxy, ans=NAN;
    float k1,k2,k3,k4;
    bool finished=false;
    std::cout<<"Enter values of range, h and initial value of y:\n";
    std::cin>>x>>b>>h>>y;
    while (!finished){
        k1=h*compute(x,y);
        k2=h*compute(x+h/2,y+k1/2);
        k3=h*compute(x+h/2,y+k2/2);
        k4=h*compute(x+h,y+k3);
        x+=h;
        y=y+(k1+2*k2+2*k3+k4)/6;
        std::cout<<std::setprecision(5)<<x<<"\t"<<y<<"\t"<<k1<<"\t"<<k2<<"\t"<<k3<<"\t"<<k4<<"\n";
        if (x>=b){
            ans=y;
            finished=true;
        }
    }
    if (!std::isnan(ans))
        std::cout<<std::setprecision(8)<<"\n"<<ans<<std::endl;

    return 0;
}
