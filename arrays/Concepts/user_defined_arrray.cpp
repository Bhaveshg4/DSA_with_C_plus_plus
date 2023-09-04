// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int num;
   cout<<"Please entr the number of element required"<<endl;
   cin>>num;
   int arr[num];
   for (int i = 0; i < num+1; i++)
   {
    cout<<"Please enter your elementsl"<<endl;
    cin>>arr[i];
    cout<<arr[i]<<" ";
    
   }
    return 0;

}