#include <iostream>
#include <vector>
using namespace std;

vector<int> selection_sort(vector <int> arr){
    int n = arr.size();

    for(int k = 0; k < n-1; k++) {
        // find smallest in array
        int smallest = k;
        for(int i = k; i < n; i++){
            if(arr[i] < arr[smallest]) {
                smallest = i;
            }
        }
        if(arr[k] > arr[smallest]) {
            swap(arr[k], arr[smallest]);
        }
        
    }
   
      return arr;
}

int main(){
    vector <int> unsorted_arr = {-2,3,4,-1,5,-12,6,1,3};
    vector<int> sorted_arr = selection_sort(unsorted_arr);
    for(int x: sorted_arr) {
        cout<<x<<",";
    }
    return 0;
}