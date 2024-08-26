#include <iostream>
using namespace std;

int linear_search(int *arr, int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {10,15,12,9,6,4,3,10,8};
    int n = sizeof(arr)/sizeof(n);
    int key;
    cout<<"enter the key: ";
    cin>>key;
    int index = linear_search(arr, n, key);
    if(index != -1) {
        cout<<"key is present at index: "<<key;
    } else {
        cout<<"key is not present in arr.";
    }
    return 0;
}