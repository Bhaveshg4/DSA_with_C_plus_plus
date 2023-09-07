#include<iostream>
//print number in decending order
using namespace std;
void decrease(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    decrease(n-1);

}
int main(){
    int n;
    cin>>n;
    decrease(n);
    return 0;
}