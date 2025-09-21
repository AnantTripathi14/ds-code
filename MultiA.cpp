// #include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    int row,col;
    int sum=0;
    cout<<"enter the number of row:";
    cin>>row;
    cout<<"enter the number of column:";
    cin>>col;
    int arr[row][col];
    cout<<"Enter the value of elements:";
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            cin>>arr[i][j];
        }
        
    }
    cout<<"\nthe 2D Array is:"<<endl;
    
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            sum+=arr[i][j];
        }
    }
    cout<<"sum of the matrix:"<<sum;

    
    return 0;
}