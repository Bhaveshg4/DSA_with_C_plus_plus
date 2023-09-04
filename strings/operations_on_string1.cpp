

#include <iostream>
#include<string>
using namespace std;
int main()
{
   //appending of a string(adding of two string)
   string str1 = "Bhavesh is a good boy";
   string str2 = "but bhavesh cant focus on its environment";
   
   //method1
   str1.append(str2);
   cout << str1 << std::endl<<endl;
   //method2
   cout<<str1+str2<<endl;
   
   //method 3 >to get a character from a string
   cout<<str1[2]<<endl;
    //clear function in string
   string str = "Bhavesh dsdsds";
   cout<<str;
   str.clear(); 
   cout<<str;
   cout<<"After clear";
   //comparing two strings
   string str1="Bhavesh";
   string str2 ="He";
   cout<<str2.compare(str1)<<endl;
   //it compares character in a string based on there ranking on //alphabetical order
   //if two strings are equal the output will bw 0
   if(str2.compare(str1)==0){
       cout<<"Strings are equal";
   }
   //Checking whether a string is empty or not
  string str1 = "Bhavesh";
  cout<<str1<<endl;
  str1.clear();
  if(str1.empty()){   //Checking whether a string is empty or not
      cout<<"String is empty"<<endl;
      
  }
    //Checking whether a string is not empty
     if(!str1.empty()){   //Checking whether a string is empty or not
      cout<<"String is empty"<<endl;
      
  }

    return 0;
}
