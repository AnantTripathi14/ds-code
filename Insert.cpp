#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    int arr[5]={3,5,7,8,6};
    int getLength=sizeof(arr)/sizeof(arr[0]);
    int pos=4;
    int elem=9;
    if (pos<0||pos>getLength){
        cout<<"Invalid";
    }
//     for (int i=0;i<getLength;i++){
//         arr[i]=arr[i+1];
//     }
//     arr[getLength-1]=9;
    
//     for (int i=0;i<getLength;i++){
//         cout<<" "<<arr[i];
//     }
//    cout<<endl;                       //insertion at last Position.
   
   
   
   
//    for (int i=getLength;i>0;i--){
//         arr[i]=arr[i-1];
//     }
    
//     arr[0]=9;
//     for (int i=0;i<getLength;i++){
//         cout<<" "<<arr[i];
//     }                               //insertion at first position.




    // for (int i=getLength;i>=pos;i--){
    //     arr[i]=arr[i-1];
    // }
    //  getLength++;
    // arr[pos-1]=30;
    // for (int i=0;i<getLength;i++){
    //     cout<<arr[i]<<" ";
    // }                                       //insertion at specific position.    
   
   
   
   
    // for (int i=getLength;i>=getLength;i--){
    //     arr[i]=arr[i-1];

    // }
    
    // for (int i=1;i<getLength;i++){
    //     cout<<" "<<arr[i-1];
    // }                                           //deleting last element of an array.


    // for (int i=getLength;i>0;i--){
    //     arr[5-i]=arr[5-i+1];
    // }
    // for (int i=1;i<getLength;i++){
    //     cout<<arr[i-1]<<" ";
    // }                                               //deleting first element of an array.


    // for (int i=0;i<getLength;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    
    // for (int i=getLength;i>=pos;i--){
    //     int temp=arr[i-2];
    //     arr[i-2]=arr[i-1];
    //     arr[i-1]=temp;

    // }
    // for (int i=1;i<getLength;i++){
    //     cout<<arr[i-1]<<" ";
    // }                                                 //deleting specific element of an array.
}
