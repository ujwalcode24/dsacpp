#include <iostream>
#include <string>
using namespace std;

string str_compression(string str){
    string output;

    for(int i = 0; i < str.length(); i++){
        int count = 1;
        while(str[i] == str[i+1]){
            i++;
            count++;
        }
        output += str[i];
        if(count > 1) {
            output += to_string(count);
        }
    }
    return output;
}

int main(){
    string s1 = "aabbccc";
    cout<<str_compression(s1)<<endl;
    string s2 = "abbbbbbbbbbbb";
    cout<<str_compression(s2)<<endl;
    return 0;
}