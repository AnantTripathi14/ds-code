#include <stdio.h>
#include <iostream>
using namespace std;
int gcd(int a,int b){
    if (a==0)
        return b;
    if (b==0)
        return a;
    int res=min(a,b);
    while (res>1){
        if (a%res==0 && b%res==0){
            break;
        }
        res--;
    }
    return res;
}
int main(){
    
    int a, b;
    cout<<"enter the First Number:";
    cin>>a;
    cout<<"enter the Second Number:";
    cin>>b;
    cout<<"Greatest common Factor of "<<a<<" and "<<b<<" is "<<gcd(a,b);
    return 0;
}