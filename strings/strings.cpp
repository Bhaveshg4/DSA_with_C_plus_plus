#include<iostream>
#include<string>//contains majority of string functions
using namespace std;
int main(){
    //pre defined dtring
    string str = "Bhavesh";
    //user defined string
    string str;
    cin>>str;
    cout<<str;
    //////////////
    string str4;
    getline(cin,str4);///if getline removed it will only take the first word of the string not the whole string as it encounters a 0
    cout<<str4<<endl;
    //another way to declare string
    string str3(5,'n'); //prints n 5 times
    cout<<str3<<endl;

    //another way to declare it
    
    return 0;

}