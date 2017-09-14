#include <iostream>

using namespace std;

int main(){
    string letter;
    string ans="NO";
    cin>>letter;
    bool n1=false,n2=false,n3=false,n4=false;
    for (int i=0; i<letter.size(); ++i){
        if (letter[i]=='h'){
            n1=true;
        }
        if (n1==true and letter[i]=='e'){
            n2=true;
        }
        if (n2==true and letter[i]=='i'){
            n3=true;
        }
        if (n3==true and letter[i]=='d'){
            n4=true;
        }
        if (n4==true and letter[i]=='i'){
            ans="YES";
            break;
        }

    }
    cout<<ans;

    return 0;
}
