#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    int cnt=0;
    bool finished=false;
    float tol=0.004, tmp;
    float max;
    int size;
    cout<<"Enter order of matrix:\t";
    cin>>size;
    float mat[size][size];
    float init[size];
    float z[size]={0};
    cout<<"Enter the matrix:\n";
    for (int i=0; i<size; ++i){
        for (int j=0; j<size; ++j){
            cin>>mat[i][j];
        }
    }
    for (int i=0; i<size; ++i)
        init[i]=1;
//    init[size-1]=1;

    while (!finished){
        for (int i=0; i<size; ++i){
              z[i]=0;
            for (int j=0; j<size; ++j)
                z[i]+=mat[i][j]*init[j];
        }

        //finding Zmax
        max=fabs(z[0]);
        for (int i=1; i<size; ++i){
            if (fabs(z[i])>max)
                max=fabs(z[i]);
        }
        for (int i=0; i<size; ++i){
            z[i]/=max;
        }

        //finding tolerance
        tmp=fabs(init[0]-z[0]);

        for (int i=1; i<size; ++i){
            if (fabs(init[i]-z[i])>tmp)
                tmp=fabs(init[i]-z[i]);
        }

        for (int i=0; i<size; ++i){
            init[i]=z[i];
            cout<<z[i]<<endl;
        }
        if (tmp<tol and cnt++==5)
            break;
    }

    for (int i=0; i<size; ++i){
        cout<<"|"<<init[i]<<"|"<<endl;
    }
    cout<<"Largest eigen value: "<<max<<endl;

    return 0;
}
