#include<iostream>
using namespace std;
int main(){
    /*
    Problem statement:
    Count inversion in the given array.
    two elements a[i] and a[j] form an inversion if a[i]>a[j] and i<j
    */
   int arr[8]={3,5,6,9,1,2,7,8};
   int inv=0;
   for (int i = 0; i < 9; i++)
   {
    for (int j = i+1; j<n; j++)
    {
        if (a[i]>a[j])
        {
           inv++;
        }
        

    }
    cout<<inv;
   }
   
   
    return 0;
}