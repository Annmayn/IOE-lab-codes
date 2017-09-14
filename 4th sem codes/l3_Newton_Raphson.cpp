#include <iostream>
#include <cmath>

float funct(float x){
    return x*x+x-2;   //function
}

float der(float x){
    return 2*x+1;         //derivative
}

int main(){
    float f,d,x;
    float tst;
    float ans=NAN;
    float fc=0;
    bool finished=false;
    std::cout<<"Enter approximated root:\t";
    std::cin>>x;
    while (!finished){
        f=funct(x);
        d=der(x);
        if (d==0){
            std::cout<<"\nRoot couldn't be determined\n";
            finished=true;
            break;
        }
        tst=fc;
        x=x-f/d;
        fc=funct(x);
        std::cout<<x<<"\n";
//        std::cout<<std::fabs(tst-fc)<<"\t"<<fc<<std::endl;
        if (fc==0){
            ans=x;
            finished=true;
        }
        else if (fc>0 or fc<0){
            if (std::fabs(fc-tst) < 0.0001){
                ans=x;
                finished=true;
            }
        }
    }
    if (!std::isnan(ans))
        std::cout<<"\n"<<ans<<std::endl;
    return 0;
}
