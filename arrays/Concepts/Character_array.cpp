//Char array
//Character arrays
//character arrays are the arrays of characters
#include <iostream>
using namespace std;
//Already declared array
int main(){
    char char_arr[100]="iamanishgupta@gmail.com";
    int i=0;
    while(char_arr[i] !='\0'){
        //here our 5th character is 0 so it stops printing.
        //as while loop encounters 0
        cout<<char_arr[i]<<endl;
        i++;
    }
    char arr_char1[100]="Bhveash";
    //User defined array
    char arr_char1[100];
    cin>>arr_char1;
    cout<<arr_char1;
    cout<<arr_char1[4];
    
    
    
    
    
    
    return 0;
}