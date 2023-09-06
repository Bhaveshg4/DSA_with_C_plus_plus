#include<iostream>
using namespace std;
void primeSieve(int n){
    int prime[1oo]={0};
    for (int i = 2; i <=n; i++)
    {
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[i]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if (prime[i]==0)
        {
            cout<<i<<" ";
        }
        
    }
    cout<<endl;
    

}
int main(){
    //finding the number of prime numbers in a given rang
    int n;
    cin>>n;
    cout<<primeSieve(n)<<endl;




    return 0;
}