#include <iostream>
#include <cmath>

float compute(float x){
    return x*x+x-2;   //the function is n^3 + 3*n^2 + 6
}

int main(){
    float c=0,a,b;
    float tst;
    float ans;
    float fc;
    bool finished=false;
    std::cout<<"Enter a and b:\t";
    std::cin>>a>>b;
    while (!finished){
        tst=c;
        c=(a+b)/2;
        fc=compute(c);
        std::cout<<c<<"\t";
        std::cout<<std::abs(tst-c)<<"\t"<<fc<<std::endl;
        if (fc==0){
            ans=c;
            finished=true;
        }
        else if (fc>0){
            b=c;
            if (std::abs(c-tst) < 0.0001){
                ans=c;
                finished=true;
            }
        }
        else{
            a=c;
            if (std::abs(c-tst)<0.0001){
                ans=c;
                finished=true;
            }
        }
    }
    std::cout<<"\n"<<ans<<std::endl;
    return 0;
}
