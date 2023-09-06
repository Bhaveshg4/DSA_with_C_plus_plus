 //clear bit: to turn a bit to 0
 #include<iostream>
 using namespace std;
 int clearBit(int n,int pos){
    int mask = ~(1<<pos);
    //~ is 1s compliment
    return(n&mask); }
    int updateBit(int n,int pos,int val){
        int mask= ~(1<<pos);
        n=n&mask;
        return (n|(value<<pos));
    }

    //Update Bit
    ///n=0101, suppose we need to update i=1 to 1


 int main(){
    clearBit(5,1);



 }