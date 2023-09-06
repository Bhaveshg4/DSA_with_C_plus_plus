#include<iostream>
using namespace std;
int main(){
char button;
cout<< "Input a character";
cin>>button;

if (button == 'a')
{
    cout<<"Hello";
}
else if (button == 'b')
{
    cout<<"Namaste";

}else if (button== 'c')
{
    cout<<"Hola";
}
else{
   cout<<"Enter a correct character";}

// using a switch statement
switch (button)
{
case 'a':cout<<"Hello"<<endl;
    break;
case 'b': cout<<"Namaste"<<endl;
    break;
case 'c': cout<<"Salute"<<endl;        

default:
    cout<<"I am still learning more"<<endl;
    break;
}   





    return 0;

}
