//Pointers 2
//Pointer to pointer
//we are capable of making a pointer that points to a different pointer
#include<iostream>
using namespace std;
int main(){
    int x=2;
    increment(x);
    cout<<x<<endl;
    int a = 10;
    int *p;
    p = &a;
    cout<<*p<<endl;
    int **q = &p;
    cout<<**q<<endl;
    //Passing pointers to function
    void increment(int xy){
        a++;
    }
}