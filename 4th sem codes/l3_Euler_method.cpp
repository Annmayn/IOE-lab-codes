#include <iostream>
#include <cmath>

float funct(float x, float y){
    return (x+y)*sin(x*y);     //function
}

int main(){
    float x,b,h,fx,y,ans=NAN;
    bool finished=false;
    std::cout<<"Enter the range, the value of step size and initial value of y:\n";
    std::cin>>x>>b>>h>>y;
    while (!finished){
        if (x==b){
            ans=y;
            finished=true;
            break;
        }
        if (x+h <= b){
            fx=funct(x,y);
            x=x+h;
            y=y+h*fx;
            std::cout<<x<<"\t"<<y<<"\n";
            if (x==b){
                ans=y;
                finished=true;
            }
        }
        else{
            ans=y;
            finished=true;
        }
    }

    if (!std::isnan(ans))
        std::cout<<"\n"<<ans<<std::endl;

    return 0;
}
