#include <iostream>

using namespace std;

int TOH(int num, char source, char dest, char aux){
    if (num==1){
        cout<<num<<" moved from "<<source<<" to "<<dest<<endl;
    }
    else{
        TOH(num-1, source, aux, dest);
        cout<<num<<" moved from "<<source<<" to "<<dest<<endl;
        TOH(num-1, aux, dest, source);

    }
}

int main(){
    int n;
    cout<<"Enter no. of disks:\t";
    cin>>n;
    TOH(n,'A','B','C');

    return 0;
}
