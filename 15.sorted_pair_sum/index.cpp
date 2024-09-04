#include <iostream>
#include <vector>
#include <climits>
#include <cstdlib>
using namespace std;

void sorted_pair_sum(vector<int> arr, int key){
    int n = arr.size();
    int s = 0;
    int e = n -1;
    int abs_diff = INT_MAX;
    int leftIndex;
    int rightIndex;

    while(s<e) {
        int cs = arr[s] + arr[e];
        if(abs(cs - key) < abs_diff) {
            leftIndex = s;
            rightIndex = e;
            abs_diff = abs(cs - key);
        }

        if(cs > key) {
            e = e - 1;
        } else {
            s = s + 1;
        }

    }
    cout<<arr[leftIndex]<<","<<arr[rightIndex]<<endl;
    
}

int main(){
    vector<int> arr = {10, 22, 28, 29, 30, 40};
    int key = 54;
    sorted_pair_sum(arr, key);
    return 0;
}