#include <iostream>
using namespace std;
int noOfZeros(int x,int i=5){
    
    
    if (x/i==0) return 0;
    return (x/i)+noOfZeros(x,i*5);
    
    
    
    
}
int main(){
    int n;
    cin>>n;
    cout<<noOfZeros(n);
    return 0;
}