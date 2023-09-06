#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1 = "ShriRamdeobabaCollegeOfEngineering";
    //If we want a substring from a string
    //use this function
    string substring = str1.substr(6/*kaun se position se chaiye*/,/*kitne chaiye*/4);
    cout<<substring<<endl;


    //to convert string to integer
    //function used: stoi
    string str2 = "345342";
    int x = stoi(str2);
    cout<<x+2<<endl;

    //int to string
    int x = 3243;
    cout<<to_string(x)+"2"<<endl;   //two strings will append

 


    return 0;
}