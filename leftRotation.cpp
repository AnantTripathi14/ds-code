#include <iostream>
#include <vector>
using namespace std;
int result(int d,vector<int> arr ){
    


}
int main(){
    int d=9,n=5;
    int arr[9]={2,3,4,5,6,7,8,98,7};
    int len=sizeof(arr)/sizeof(arr[0]);

    
    for (int j=0;j<4;j++){
        int emp=arr[0];
        for (int i=0;i<len;i++){
            arr[i]=arr[i+1];
        }
        arr[len]=emp;
    }
    for (int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }




}