#include <iostream>
#include <vector>
#include <utility>
using namespace std;


vector<pair<int, int> > sortCartesian(vector<pair<int, int> > v){
    int N = v.size();

    for(int i=0; i< N-1; i++){
        int smallest = i;
        for(int j=i; j < N; j++){
            if(v[j].first <= v[smallest].first) {
                if(v[j].first == v[smallest].first) {
                    if(v[j].second < v[smallest].second) {
                        smallest = j;
                    }
                } else {
                    smallest = j;
                }
                
            }
        }
        swap(v[smallest], v[i]);
    }

    return v;
}

void printPair(pair<int, int> p){
    cout<<"("<<p.first<<", "<<p.second<<")";    
}

int main(){
    vector<pair<int, int> > unsorted_v;

    //{ (3, 4), (2, 3), (3, 7), (1, 5), (3, 4) }    
  
    // inserting pairs to the vector 
    unsorted_v.push_back(make_pair(3,4)); 
    unsorted_v.push_back(make_pair(2,3));
    unsorted_v.push_back(make_pair(3,7));
    unsorted_v.push_back(make_pair(1,5));
    unsorted_v.push_back(make_pair(3,4));

    vector<pair<int, int> > sorted_v = sortCartesian(unsorted_v);
    //print sorted vector
    cout<<"{";
    for(int i=0; i<sorted_v.size(); i++){
        printPair(sorted_v[i]);
        if(i < sorted_v.size() - 1) {
            cout<<",";
        }
    }
    cout<<"}";
    return 0;
}