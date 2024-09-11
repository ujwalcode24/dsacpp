#include <iostream>
#include <vector>
using namespace std;

vector<int> counting_sort(vector <int> arr){
    int n = arr.size();
     // find largest
     int largest = 0;
     for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
     }

     //create a vecor with function
    vector<int> freq(largest + 1, 0);

    for(int x: arr) {
        freq[x]++;
    }

    int pointer = 0;
    for(int i = 0; i<freq.size(); i++) {
        while(freq[i] > 0) {
            arr[pointer] = i;
            pointer++;
            freq[i]--;
        }
    }
      return arr;
}

int main(){
    vector <int> unsorted_arr = {88,97,10,12,15,1,5,6,12, 5, 8};
    vector<int> sorted_arr = counting_sort(unsorted_arr);
    for(int x: sorted_arr) {
        cout<<x<<",";
    }
    return 0;
}