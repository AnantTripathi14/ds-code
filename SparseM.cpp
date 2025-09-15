#include <iostream>
using namespace std;
int main(){
   
    int row ,col,zero=0,NZ=0;
    
    cout<<"enter the number of rows:";
    cin>>row;
     cout<<"enter the number of columns:";
    cin>>col;
    int arr[row][col];
    int Narr[row][col];
     cout<<"enter the values of the Matrix:";
    
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            cin>>arr[i][j];
            
        }
    }
    cout<<endl;
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            cout<<arr[i][j];
            
        }
        cout<<endl;
    }
     for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            if (arr[i][j]==0){
                zero++;
            }
            else{
                NZ++;    
            }

        }
    }
    cout<<"number of zeros in the matrix:"<<zero<<endl;
    cout<<"number of non-zeros in the matrix:"<<NZ<<endl;
   if (zero>NZ){
     for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            if(arr[i][j]!=0){
                Narr[i][j]=arr[i][j];
            }else{
                Narr[i][j]=0;
            }
        }
    }
    cout<<"new Array of non zero values"<<endl;
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
           if (Narr[i][j]!=0){
            cout<<Narr[i][j]<<" ";
            }
            
        }
        cout<<endl;        
    }
   }else{
    cout<<"Not a Sparse Matrix!";
   }
    
    
    
    
    return 0;
}
