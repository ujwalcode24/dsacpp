#include <iostream>
#include <vector>
using namespace std;

vector<int> insertion_sort(vector <int> arr){
    int n = arr.size();
   for(int i=1; i <= n-1; i++) {
    int curr = arr[i];
    int prev = i - 1;
    while(prev >= 0 and arr[prev] > curr){
        arr[prev + 1] = arr[prev];
        prev = prev-1 ;
    }
    arr[prev + 1] = curr;
   }
    return arr;
}

int main(){
    vector <int> unsorted_arr = {-2,3,4,-1,5,-12,6,1,3};
    vector<int> sorted_arr = insertion_sort(unsorted_arr);
    for(int x: sorted_arr) {
        cout<<x<<",";
    }
    return 0;
}