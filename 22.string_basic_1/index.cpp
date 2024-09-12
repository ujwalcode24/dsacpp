#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char sentence[100];
    char temp = cin.get();
    int len = 0;
    while(temp != '\n') {
        int new_len = len++; // dont know reason for this yet
        sentence[new_len] = temp;
        temp = cin.get();
    }
    sentence[len] = '\0';
    cout<<sentence<<endl;
    return 0;    
}
using namespace std;

