#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
// int main(){
//     int n;
//     int count=0;
    
//     int arr[11]={3,3,1,1,2,3,3,3,4,5,6};
//     int Len=sizeof(arr)/sizeof(arr[0]);
//     cout<<"Enter the Number to Check:";
//     cin>>n;
//     for (int i=0;i<Len;i++){
//         if (n==arr[i]){
//             count++;
//         }

//     }
//     cout<<count;
   
// }
 vector<int> countArray(vector<int>& arr, int x) {
        // Complete the function
        int f=arr.size();
        vector<int> ar[f];
        
        for (int i=0;i<f;i++){
            int avg=0,count=0;
            avg=(arr[i]+x)/2;
            for (int j=0;j<f;j++){
                if (avg==arr[j]){
                    count++;
        
                }
                    
            }
            ar[i]=count;
            return ar;
            
            
        }
    }