#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the number:";
    cin>>a;
    int count=0;
    if (a==0){
        cout<<"the Enterered Number cannot be Zero.";
    }
    else {
        if (a<0){
            a=-a;
        }
        
    }
    while (a>0){
        a=a/10;
        count++;
    }
        
        
    
    cout<<"Number of digits="<<count;
}