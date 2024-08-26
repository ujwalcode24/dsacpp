#include <iostream>
using namespace std;

void reverse_arr(int * arr, int n) {
    int start = 0;
    int end = n-1;
    while(start <= end) {
        swap(arr[start], arr[end]);
        start+=1;
        end-=1;
    }
}

int main(){
    int arr[] = {10,20,30,40,50,60,70,89};
    int n = sizeof(arr)/ sizeof(int);
    reverse_arr(arr, n);

    //print reversed array
    for(int i = 0; i< n; i++){
        cout<<arr[i]<<", ";
    }

}