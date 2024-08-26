#include <iostream>
using namespace std;

//function paramater can be * arr OR arr[]
void printArray(int *arr){

    // will be error because arr is stored in pointer variable of size 8 byte
    int n = sizeof(arr)/sizeof(int); 

    //print arr in Function
    cout<<"printing Array in Function"<<endl;
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ,";
    }

}

//correct printArray implementation

void correctPrintArray(int *arr,int n){
 cout<<"printing Array in correct Function"<<endl;
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ,";
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    //print arr in main
    cout<<"printing Array in main"<<endl;
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ,";
    }
    //printArray(arr);
    correctPrintArray(arr, n);

    return 0;
}