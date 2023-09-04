#include<iostream>
using namespace std;  //when you dont have to write std again and again
int main(){
    cout<<"Hello World\n";    //std:standard

    int father_gave = 2000;
    int mother_gave = 4000;                                              // pre defined numbers
    int total_money = father_gave+mother_gave;
    cout<<"Total money which rahul have:"<<father_gave+mother_gave<<endl;


    int amount_mother;
    cin>> amount_mother;                // takes the input from the money given by mother

    int amount_father;
    cin>> amount_father;                // takes the input from the money given by father

    int total_money = amount_father+amount_mother;
    cout<<"Total money:"<<total_money<<endl;


    // << insertion operator
    // >> extraction operator
}