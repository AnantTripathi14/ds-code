#include <iostream>
#include <vector>
using namespace std;
int main(){
    int r=3,c=3;
    vector<vector<int>> arr(3,vector<int>(3));
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    int n=arr.size();
    int m=arr[0].size();
    int score[3]={0,0,0};

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            score[i]+=arr[i][j];
        }
        cout<<endl;
    }
    for (int i=0;i<n;i++){
        cout<<"Score of team "<<i+1<<": "<<score[i]<<endl;
        
        
    }

    int tem=0;
    for (int i=1;i<n;i++){
        if (score[i]>score[tem]){
            tem=i;
        }

    }
    cout<<"team with the highest score:"<<tem+1<<endl;
    cout<<"the highest score :"<<score[tem];
    


}