#include <iostream>
using namespace std;


void kadanes_maxsum(int *arr, int n){
    int curr_sum=0;
    int max_sum=0;

    for(int i=0; i<n; i++){
        if(curr_sum < 0) {
            curr_sum = 0;
        }
        curr_sum = curr_sum + arr[i];
        if(curr_sum > max_sum) {
            max_sum = curr_sum;
        }
    }

    cout<<"max sum : " << max_sum;
}

int main(){
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/ sizeof(int);
    kadanes_maxsum(arr,n);
    return 0;
}