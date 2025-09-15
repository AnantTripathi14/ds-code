#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    int a;//3456
    cout<<"enter the number:";
    cin>>a;
    int rev=0;
    int rem=0;
    while (a>0){
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    cout<<"After reversing the Number:"<<rev;
    return 0;
}