#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int num){
    for (int i=2; i<=num/2; i++){
        if (num%i==0){
            return false;
        }

    }
    return true;
}

int main(){
    int n;
    int cnt=0,limit=0;
    vector<int> prime_no;
    cin>>n;
    for (int i=2; i<=n/2; ++i){
        if (isPrime(i)){
            prime_no.push_back(i);
        }
    }
    for (int i=4; i<=n; ++i){
        for (auto j=prime_no.begin(); j!=prime_no.end(); ++j){
            if (i%(*j)==0){
                ++limit;
            }
            if (limit>2){
                limit=0;
                break;
            }
        }
        if (limit==2){
            ++cnt;
        }
        limit=0;
    }
    cout<<cnt;
    return 0;
}
