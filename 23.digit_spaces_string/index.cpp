#include <iostream>
using namespace std;

int main(){
    char ch;
    ch = cin.get();

    //count
    int alpha = 0;
    int digits = 0;
    int space = 0;

    while(ch != '\n'){
        if(ch >= '0' and ch <= '9') {
            digits++;
        } else if((ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z')){
            alpha++;
        } else if(ch == ' ' or ch == '\t'){
            space++;
        }
        ch = cin.get();
    }

    cout<<"total space: " << space<<endl;
    cout<<"total alpha: " << alpha<<endl;
    cout<<"total digits: " <<digits<<endl;

    return 0;
}