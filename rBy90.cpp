#include <iostream>
#include <array>
#include <vector>
using namespace std;
int main(){
    vector<vector<int>> arr={ {1,2,3},
                              {4,5,6},
                              {7,8,9}};
    int n=arr.size();
    int m=arr[0].size();
    vector<vector<int>> mat(m,vector<int>(n));
    
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            mat[i][j]=arr[j][i];
        }
    }
    cout<<endl;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

}