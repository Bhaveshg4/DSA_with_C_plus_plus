#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
   //to find out a record breaking day in a array which is fetched with event days.
    int n;
    cin>>n;
    int a[n+1];
    int a[n]=-1;
    for (int i = 0; i <n; i++)
    {
        cin>a[i];

    }
    if (n==1)
    {
        cout<<"1"<<endl;
        return 0;
    }
    int ans=0;
    int mx = -1;
    for(int i=0;i<n;i++){
        if (a[i]>mx && a[i]>a[i+1])
        {
            ans++;
        }
        mx=max(mx,a[i]);
        
    }
    
    
     
      
    
    return 0;
}