#include <stdio.h>;
#include <iostream>;
using namespace std;
// int sumOfDigits(int num){
//     int digSum=0;
   
    
//     while(num>0){
//         int lastDigit=num%10;
//         num/=10;
//         digSum+=lastDigit;

//     }   
//     return digSum; 

// }
// int main(){
//     cout << "Sum of Digits of a number:" << sumOfDigits(57) << endl;
//     return 0;
// }

// int factN(int n){
//     int fact=1;
//     for (int i = 1;i<=n;i++ ){
//         fact*=i;
//     }
//     return fact;
// }
// int main(){int n=8,r=2;
//     int c=factN(n)/(factN(r)*factN(n-r));
//     cout << "nCr=" << c <<endl;
//     return 0;
// }

int swapT(){
    int a=3,b=5;
    cout<<"before swap:"<<a<<" and "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swap:"<<a<<" and "<<b<<endl;


    

}
int swap(){
    int a=4,b=6;int c;
    cout<<"before swap"<<a<<" and "<<b<<endl;

    c=a;
    a=b;
    b=c;
    cout<<"after swap"<<a<<" and "<<b<<endl;


}

int main(){
    cout<<swapT()<<endl;
    cout<<swap()<<endl;
}
