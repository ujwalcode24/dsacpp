#include <iostream>
#include <vector>
using namespace std;

vector<int> sort_bubble(vector <int> arr){
    int n = arr.size();
    for(int i = 0; i < n-1 ; i++) {
    for(int j = 0; j < n-i-1; j++) {
        if(arr[j] > arr[j+1]) {
            swap(arr[j], arr[j+1]);
        }
    }
    }

    return arr;
}

int main(){
    vector <int> unsorted_arr = {-2,3,4,-1,5,-12,6,1,3};
    vector<int> sorted_arr = sort_bubble(unsorted_arr);
    for(int x: sorted_arr) {
        cout<<x<<",";
    }
    return 0;
}