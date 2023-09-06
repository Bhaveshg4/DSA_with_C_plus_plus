#include<iostream>
#include<string>
using namespace std;
int main(){
    //erase function in C++
    string str = "nincompoop"
    str.erase(3/*index jisse delete karna hai*/,3/*kitne characters delete karne hai*/);

    //find function in strings
    //substring is a chotu sa part of a string
    string findstr =str.find("com");
    cout<<findstr<<endl;//returns the index where the substring is.

    //insert function in string,this function inserts a string in a target string
    string insert_oper= str.insert(2/*kaun se index pr insert karni hai*/,"lol"/*declare string*/);
    cout<<str<<endl;

    //to calculate length/size
    cout<<str.size()<<endl;
    //str.length works when you go to iterate
    cout<<str.length()<<endl;
    //example:
    for(int i =0;i<str.length();i++){
        //prints all the character
        cout<<str[i]<<endl;
    }
    return 0;

}