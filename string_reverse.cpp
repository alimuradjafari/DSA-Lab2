#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int size;
    cout<<"Enter Size of your String: ";
    cin>>size;
    cin.ignore();

    //dynamically allocated memory
    char* sPtr = new char[size+1]; //plus one for the null character
 
    //get the input value
    cout<<"Enter your string: ";
       cin.getline(sPtr,size+1); //be able to get whitespace as well

    //print the user input
    cout<<"you have entered: ";
    for(int i=0;i<size;i++){
        cout<<sPtr[i];
    }

    //reverse the input string 
    cout <<"\nReverse of the String: ";
    for(int i=1; i<=size; i++){
        cout<<*(sPtr+(size-i)); //pointer points at the last index of array and then dereference 
    }

    //free allocated memory
        delete[] sPtr;
    
         return 0;
}