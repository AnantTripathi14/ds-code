#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    int a;
    int og=a;
    cout<<"enter the number:";
    cin>>a;
    int rev=0;
    int rem=0;
    while (a>0){
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    cout<<"reveresed number:"<<rev;
    if (rev=og){
        cout<<"True,The Number is a palindrome."<<endl;
    }else {
        cout<<"False, the Number is Not a Palindrome."<<endl;
    }
    return 0;
}