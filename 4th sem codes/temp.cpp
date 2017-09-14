#include <iostream>

using namespace std;

string check(int x1, int y1, int x2, int y2, int row, int col){
    bool visited[row][col];
    for (int i=0; i<row; ++i){
        for (int j=0; j<col; ++j)
            visited[i][j]=false;
    }
    vector<vector<int>> mystack;
    if (x1==1){
        if (x1-1==0){
            visited[x1-1][y1]=true;
        }
    }

}

int main(){

    int r,c,n;
    int *mptr;
    int *ans;
    string out;
    cin>>r>>c;
    mptr=new int[r][c];
    for (int m=0; m<r; ++m){
        for (int i=0; i<c; ++i){
            cin>>mptr[r][c];
        }
    }
    cin>>n;
    ans=new int[n][4];
    for (int i=0; i<n; ++i){
        for (int j=0; j<4; ++j)
            cin>>ans[i][j];
    }
    //main program starts here
    for(int i=0; i<n; ++i){
        out=check(ans[i][0],ans[i][1],ans[i][2],ans[i][3],r,c);
        cout<<out<<endl;
    }



    return 0;
}
