//Spiral array problem arrays
//2D arrays
//Spiral Array printing
#include <iostream>
using namespace std;
bool flag = false;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            
        }
//Spiral Printing code
  int row_start=0;
  int row_end=n-1;
  int col_start=0;
  int col_end=m-1;
  while(row_start<=row_end && col_start<=col_end){
      //for row start
      for(int col=col_start;col<=col_end;col++ ){
          cout<<arr[row_start][col]<<" ";
          }
          row_start++;
          // for column end
     for(int row = row_start;row<=row_end;row++){
         cout<<arr[row][col_end]<<" ";
         col_end--;
     }      
     // for row end
      for(int col=col_end;col<=col_start;col-- ){
          cout<<arr[row_end][col]<<" ";
          }
          row_end--;
          
    //for column start
    for(int row = row_end;row<=row_start;row--){
         cout<<arr[row][col_start]<<" ";
         col_start++;
  }
    }
    return 0;
}