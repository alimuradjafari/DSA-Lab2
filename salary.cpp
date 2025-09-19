#include <iostream>
using namespace std;

int main(){

    int size;
    cout<<"Enter number of Employees: ";
    cin>>size;

    int* salArray =  new int[size];

    //input sallaries
    for(int i=0; i<size;i++){
        cout<<"Enter Salary for employee "<<(i+1)<<": ";
        cin>>salArray[i];
    }
    //increment firmula
    for(int i=0;i<size;i++){
        salArray[i] = salArray[i] + salArray[i] /(i+1);
    }
    //display updated salaries
    cout<<"\nUpdated salaries: ";
    for(int i=0;i<size;i++){
        cout<<salArray[i]<<" ";

    }
    cout<<endl;
    
    return 0;
}