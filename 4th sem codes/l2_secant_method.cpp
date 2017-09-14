#include <iostream>
#include <cmath>

float compute(float x){
    return x*x;   //the function is n^3 + 3*n^2 + 6
}

int main(){
    float c=0,a,b, fa,fb;
    float tst;
    float ans=0;
    float fc;
    bool finished=false;
    std::cout<<"Enter a and b:\t";
    std::cin>>a>>b;
    while (!finished){
        tst=c;
        fa=compute(a);
        fb=compute(b);
        if (fb==fa){
            std::cout<<"Root can not be determined\n";
            finished=true;
            break;
        }
        c=(a*fb-b*fa)/(fb-fa);
        fc=compute(c);
        std::cout<<c<<"\t";
        std::cout<<std::abs(tst-c)<<"\t"<<fc<<std::endl;
        if (fc==0){
            ans=c;
            finished=true;
        }

        else{
            a=b;
            b=c;
            if (std::abs(c-tst)<0.0001){
                ans=c;
                finished=true;
            }
        }
    }
    std::cout<<"\n"<<ans<<std::endl;
    return 0;
}
