#include <iostream>
using namespace std;
//function that print variable address and its value from stack and heap
void analyze_pointer(int* ptr){
    
    cout<<"Memory location: "<<ptr<<endl;
    cout<<"Value stored at the "<<ptr <<" memory location: "<<*ptr<<endl;

}
int main(){
    //variable created on stack
    int iValue = 200;

    cout<<"\n--- variable on stack ---\n";
    analyze_pointer(&iValue);

    //variable created on the heap
    int* iPtr = new int;
    *iPtr = 85;

    cout<<"\n--- variable on heap ---\n";
    analyze_pointer(iPtr);

    delete iPtr;
    return 0;
}