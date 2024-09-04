#include <iostream>
#include <vector>
using namespace std;

void vect_kadanes_maxsum(vector<int> arr, int n){
    int cs = 0; //current sum
    int ms = 0; //max sum

    for(int i=0; i<n; i++){
        if(cs < 0) {
            cs = 0;
        }
        cs = cs + arr[i];
        if(cs > ms) {
            ms = cs;
        }
    }
    cout<<"max sum: "<<ms;
}

int main(){
    vector<int> arr1 = {-2,3,4,-1,5,-12,6,1,3};
    int n = arr1.size();
    vect_kadanes_maxsum(arr1, n);
    return 0;
}