#include <iostream>
using namespace std;

int main(){
    int marks[100];
    int n;
    cout<<"Enter number of marks: ";
    cin>>n;
    //enter marks
    for(int i=0; i<n; i++) {
        cin>>marks[i];
        //update
        marks[i] = marks[i] * 2;
    }
    //output marks
    for(int i=0; i< 100; i++) {
        cout<<marks[i]<<",";
    }
}

