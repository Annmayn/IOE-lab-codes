#include <iostream>
#include <cstdlib>
#include <iomanip>

int main(){
    int n,d,tmp;
    float x,y,tempx;
    std::cout<<"Enter no. of data:\t";
    std::cin>>n;
    std::cout<<"Enter degree of polynomial:\t";
    std::cin>>d;
    float mat[d+1][d+2];

    float sum[3*d+2];
    for (int i=0; i<3*d+2; ++i){
            sum[i]=0;
    }
    sum[0]=n;
    for (int i=0; i<n; ++i){
        std::cin>>x>>y;
        tempx=x;
        for (int k=1; k<2*d+1; ++k){
            sum[k]+=tempx;
            tempx=tempx*x;
        }
        for (int k=2*d+1; k<3*d+2; ++k){
            sum[k]+=y;
            y=x*y;
        }
    }

    //matrix initialization for Gauss Jordan
    for (int i=0; i<=d+1; ++i){
        tmp=i;
        for (int j=0; j<=d+1; ++j){
            mat[i][j]=sum[tmp];
            ++tmp;
        }
        tmp=2*d+1;
        for (int i=0; i<d+1; ++i){
            mat[i][d+1]=sum[tmp];
            ++tmp;
        }
    }

    //display the matrix
    for (int i=0; i<d+1; ++i){
        std::cout<<" |";
        for (int j=0; j<d+2; ++j)
            std::cout<<mat[i][j]<<" ";
        std::cout<<"|"<<std::endl;
    }

    //Gauss Jordan method

    for (int i=0; i<d+1; ++i){
        float element=mat[i][i];
        for (int j=0; j<d+1; ++j){
            if (i==j)
                continue;
            float coeff=mat[j][i]/element;
            for (int k=0; k<d+2; ++k){
                mat[j][k]-=coeff*mat[i][k];
            }
        }
    }

    for (int i=0; i<d+1; ++i){
        std::cout<<"x"<<i+1<<" : "<<mat[i][d+1]/mat[i][i]<<std::endl;
    }


    return 0;
}
