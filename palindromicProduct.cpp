#include <iostream>
using namespace std;



int main(){
    int x;long num=0;
    cin>>x;
    int a=x;
    

    
    
    while (x>0){
        long rem=x%10;
        x=x/10;
        num=num*10+rem;   
    }
    if(num==a){
        cout<<"A Palindrome";
    }else {
        cout<<"not a palindrome";
    }
    
    
    

    return 0;    
}


