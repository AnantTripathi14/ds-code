#include <iostream>
using namespace std;

int main(){
    int n,m;
     cout<<"enter the number of rows:";
    cin>>n;
     cout<<"enter the number of column:";
    cin>>m;
    int mat[n][m];
    int srow=0,scol=0,erow=n-1,ecol=m-1;
    
    
    cout<<"enter the Matrix:";
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
         cin>>mat[i][j];
        }
    }
    for (int i=0;i<n;i++){
         for (int j=0;j<m;j++){
            cout<<mat[i][j];
        }
        cout<<endl;
    }
    while (srow<=erow&&scol<=ecol){
        //top row traverse:
        for (int s=scol;s<=ecol;s++){
            cout<<mat[srow][s]<<" ";
        }
        //end column traverse:
        for (int e=srow+1;e<=erow;e++){
            cout<<mat[e][ecol]<<" ";
        }
        //-bottom-end col to start col:
        for(int e=ecol-1;e>=scol;e--){
            if (srow==erow){
                break;
            }
            cout<<mat[erow][e]<<" ";
        } 
        // bottom left to top row
        for (int b=erow-1;b>=srow+1;b--){
            if (scol==ecol){
                break;
            }
            cout<<mat[b][scol]<<" ";
        }
        srow++;
        ecol--;
        erow--;
        scol++;
    }

        
    
}