#include <iostream>
#include <cmath>

using namespace std;
bool prime(long x){
    if (x<2) return false;
    for (long i=2;i<=sqrt(x);i++){
        if (x%i==0) return false;       
    }
    return true;

}
int main(){
    
        long n;
        cin >> n;
        long a=n-1;
        while(a>0){
            if (n%a==0&&prime(a)){
                cout<<a;
                break;
            }

            
            a--;
        }
        
    
    
    return 0;
}
