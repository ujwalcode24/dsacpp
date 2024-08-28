#include <iostream>
using namespace std;

void print_subarray(int *arr, int n){
    for(int i=0; i< n-1; i++){
        for(int j=i+1; j<n; j++){
            cout<<"(";
            for(int k=i; k<=j; k++){
                cout<<arr[k];
                if(k!=j){ //formatting logic
                    cout<<",";
                }
            }
            cout<<")"; 
            if(j<n-1){ //formatting logic
                cout<<",";
            }
        }
        cout<<endl;
    }
}

int main(){
    int arr[] = {10,20,30,40,50,60,70,89};
    int n = sizeof(arr)/ sizeof(int);
    print_subarray(arr, n);
    return 0;
}