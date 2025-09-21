#include <iostream>
#include <vector>
using namespace std;
int sum(int n){
    int Sum=0;
    if (n==0) return 0;
    Sum+=n;
    return (n+sum(n-1));
}
int main(){
    int arr[4]={1,2,3,5};
    int Add=0;
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        Add+=arr[i];
    }
    cout<<sum(5)-Add;
   
   
    return 0;

}