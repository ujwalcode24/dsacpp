#include <iostream>
using namespace std;

int binary_search(int * arr,int n,int key){
    int start = 0;
    int end = n-1;

    while(start <= end) {
        int midpoint = (start + end)/2;
        if(key == arr[midpoint]) {
            return midpoint;
        } else if(key < arr[midpoint]){
            end = midpoint - 1;
        } else {
            start = midpoint + 1;
        }
    }
    return -1;

}

int main(){
    int arr[] = {10,20,30,40,50,60,70,89};
    int n = sizeof(arr)/ sizeof(int);
    int key;
    cout<<"enter key: "<<endl;
    cin>>key;
    int index = binary_search(arr, n, key);
    if(index !=-1){
        cout<<"Key is present at index: "<<index<<endl;
    } else {
        cout<<"Key is NOT Found"<<endl;
    }
    return 0;
}