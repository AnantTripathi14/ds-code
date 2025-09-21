#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    int gt=0;
    int arr[6]={8,2,7,5,11,1};
    int Len=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<Len;i++){
        if(gt<arr[i]){
            gt=arr[i];
        }
    }
    cout<<gt;
    return 0;
}