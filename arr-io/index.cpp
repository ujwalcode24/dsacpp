#include <iostream>
using namespace std;

int main(){
    int marks[100];
    int n;
    cout<<"Enter number of marks: 5";
    cin>>n;
    //enter marks
    for(int i=0; i<n; i++) {
        cin>>marks[i];
    }
    //output marks
    for(int i=0; i< n; i++) {
        cout<<marks[i]<<",";
    }
}

