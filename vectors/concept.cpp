#include<iostream>
#include<vector>
using namespace std;
int main(){
    //No need to specify the size of vectors while initializing
    vector<int> vr1;
   // vector <type of data> name of vector
    v.push_back(1);
    v.push_back(2); //Pushing the elements into evctor
    v.push_back(3);
    for(int i=0;i<v.size();i++){
        cout<<c[i]<<endl; //printing elements

    }
    vector<int>::iterator it;
    for (it=v.begin();it!=v.end();it++){
        cout<<*it<<endl; //printing elements
    }
    for (auto element:v)
    {
        cout<<element<<endl; //printing elements
    }
    v.pop_back();//pops the last element in vector

    
    
    

    return 0;
}