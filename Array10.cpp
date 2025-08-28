#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    double sum=0;
    int multi=1;
    int arr[6]={3,5,8,6,4,3};
    int getLength=sizeof(arr)/sizeof(arr[0]);
     for (int i=0;i<getLength;i++){
        cout<<arr[i]<<" ";
    }
    for (int i=0;i<getLength;i++){
        sum+=arr[i];
    }
    cout<<endl;
    cout<<"sum="<<sum;
    for(int i=0;i<getLength;i++){
        if(i%2==0){
            multi*=arr[i];
        }

    }
    cout<<endl;
    cout<<"Sum Multiplication of No at Even places:"<<multi<<endl;
    double avg=sum/getLength;
    cout<<"Average of the Array Elements:"<<avg;

    
    
}