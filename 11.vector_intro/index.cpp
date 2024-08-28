#include <iostream>
#include <vector>
using namespace std;

void print_vec(vector<int> arr){
    cout<<endl;
    cout<<"vector created with function"<<endl;
    for(int i=0; i<arr.size(); i++){
        cout<< arr[i];
        if(i<arr.size() - 1){
            cout<<",";
        }
    }
}

int main(){
    //vector creating
    vector<int> abc = {1,2,3};

    //adding element to the vector
    abc.push_back(12);

    //vector size
    cout<<"size: "<<abc.size()<<endl;

    //vector capacity
    cout<<"capacity: "<<abc.capacity()<<endl;

    //looping vector
    cout<<"printing vector elements"<<endl;
    for(int i=0; i<abc.size(); i++){
        cout<< abc[i];
        if(i<abc.size() - 1){
            cout<<",";
        }
    }

    //creating vector with fill constructor
    vector<int> arr1(5,0);
    
    //print with function 
    print_vec(arr1);

    //remove value at the end
    arr1.pop_back();

    //print with function 
    print_vec(arr1);
    return 0;
}