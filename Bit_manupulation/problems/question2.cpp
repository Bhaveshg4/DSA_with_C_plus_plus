#include<iostream>
using namespace std;
int numberofones(int n){
    int count =0;
    while (n)
    {
        n=n&(n-1);
        count++;
    }
    return count;
}
int main(){
    //write a program to count the number of ones in binary 
    //representation of a number
    cout<<numberofones(18)<<endl;
    return0;

}