#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int find_lower_bound(vector<int> arr, int key){
    int lb = INT_MIN;
    int n = arr.size();
    for(int i=0; i<n; i++) {
        if(arr[i] == key) {
            return arr[i];
        }
        if(arr[i] < key && arr[i] > lb) {
            lb = arr[i];
        }
    }
    return lb;
}

int lb_binary_search(vector<int> arr, int key){
    int s = 0;
    int n = arr.size();
    int e = n - 1;
    int lb = INT_MIN;

    while(s <= e) {
        int midpoint = (s + e)/2;
        if(arr[midpoint] <= key) {
            lb = arr[midpoint];
            s = midpoint + 1;
        } else {
            e = midpoint - 1;
        }
    }
    return lb;
}

int main(){
    vector<int> arr = {-1,-1,2,3,5};
    int val = 4;

    //int lb = find_lower_bound(arr, val);
    int lb = lb_binary_search(arr, val);
    cout<<lb<<endl;
    return 0;
}