#include <iostream>
#include <cstring>
using namespace std;


void largest_string(){
    int n;
    cin>>n;
    cin.get();
    char sentence[1000];
    char largest[1000];
    int largest_len = 0;
    while(n--){
        cin.getline(sentence, 1000);
        int curr_len = strlen(sentence);
        if(curr_len > largest_len) {
            largest_len = curr_len;
            strcpy(largest, sentence);
        }
    }

    cout<<"largest sentence is: "<<endl<< largest;
}

int main(){

    largest_string();
    return 0;
}