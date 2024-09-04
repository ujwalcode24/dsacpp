#include <iostream>
#include <vector>
using namespace std;

vector<int> kRotate (vector <int> arr, int n) {
    int len = arr.size();
    int r = n%len;
    if(r!=0) {
        for(int i = 0; i<r; i++){
            int last = arr[len - 1];
            arr.pop_back();
            arr.insert(arr.begin(), last);
        }
    }
    return arr;

}

int main(){

    vector<int> arr1 = {1, 3, 5, 7, 9};
    int x = 2;
    vector<int> result_vector =  kRotate(arr1, x);
    for(int x: result_vector) {
        cout<<x<<endl;
    }
    return 0;
}