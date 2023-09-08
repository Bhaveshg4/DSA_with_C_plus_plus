#include<iostream>
using namespace std;
int main(){
    vector<int>v3(/*size*/3,60/*kaun se elements*/);
    vector<int>v2(/*size*/3,10/*kaun se elements*/);
    swap(v3,v2);
    //swaps the vector v3 and v2

    // pair
    //std::pair stl container to store pair of values
    pair<int,char> p;
    p.first=3;
    p.second='r';
    return 0; 
}