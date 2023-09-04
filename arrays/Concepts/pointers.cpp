//Pointer 1
//Pointers: Pointers are variables that store the addfree of other variables
#include<iostream>
using namespace std;
int main(){
    //pointer ka use karke ham variables ko access bhi kar sakte hai and update bhi
    int a = 10;
    int *aptr;
    aptr=&a;
    cout<<aptr<<endl; //gives memory location
    cout<<*aptr<<endl;//gives value of pointer aptr
    
    //Arithmetic operatoin on pointers, we can only do ++,--,+,-.
    int b = 20;
    int *bptr = &b;
    cout<<bptr<<endl;
    bptr++;
    cout<<bptr<<endl;
    
    //Relation between arrrays and pointers
    int arr[]={10,20,30};
    cout<<*arr<<endl;
    //prints 10 as a output because  the initial array points to the 0th element 
    //arrays behave similar to pointers
    int *ptr= arr;
    for(int i=0;i<3;i++){
        cout<<*ptr<<endl;
        ptr++;
        //arr++ gives an arror because its values can't be modified
        
    }
    return 0;
}