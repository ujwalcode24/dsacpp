#include <iostream>
using namespace std;

void prefix_sum(int *arr, int n){
    //create prefix array
    int prefix_arr[n];
    prefix_arr[0] = arr[0];

    for(int i = 1; i<n; i++){
        prefix_arr[i] = prefix_arr[i-1] + arr[i];
    }

    //largest subarray sum
    int largest_sum=0;

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
           int sum = i>0 ? prefix_arr[j] - prefix_arr[i-1]: prefix_arr[j]; //when i = 0 logic
           if(sum > largest_sum){
            largest_sum = sum;
           } 
        }
    }
    cout<<largest_sum;

}

int main(){
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/ sizeof(int);
    prefix_sum(arr, n);
    return 0;
}