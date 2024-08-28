#include <iostream>
using namespace std;

void subarr_sum(int *arr, int n ){
    int largest_sum=0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            int sum=0;
            for(int k=i; k <=j; k++){
                sum += arr[k];
            }
        if(sum>largest_sum){
            largest_sum = sum;
        }
        }
    }
    cout<<largest_sum;
}

int main(){
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/ sizeof(int);
    subarr_sum(arr,n);
    return 0;
}