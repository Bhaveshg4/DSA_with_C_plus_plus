#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    //Longet Arithematic Subarray
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       cin>> arr[i];
    }
    int ans=2;
    int pd=a[1]-a[0];
    int j=2;
    int current=2;
    while(j<n){
        if (pd==a[j]-a[j-1])
        {
            current++
        }
        else{
            pd=a[j]-a[j-1];
            curr=2;
        }
        ans = max(ans,curr);
        j++
        
    }
    cout<<ans<<endl;
    return 0;
}