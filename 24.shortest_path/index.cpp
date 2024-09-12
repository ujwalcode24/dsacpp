#include <iostream>
using namespace std;

//SNNNEWE
int main(){
    char ch[1000];
    cin.getline(ch,1000);
    int x = 0;
    int y = 0;

    for(int i=0; ch[i]!='\0'; i++){
        
        switch(ch[i]){
            case 'E':
                x++;
                break;
            case 'W':
                x--;
                break;
            case 'N':
                y++;
                break;
            case 'S':
                y--;
        }
    }

    cout<<"(x,y) = "<<"("<<x<<", "<<y<<")"<<endl;

        if(x == 0 and y == 0) {
            cout<<ch<<endl;
        }
        while(x>0) {
            x--;
            cout<<"E";
        }
        while(x<0){
            x++;
            cout<<"W";
        }
        while(y>0){
            y--;
            cout<<"N";
        }
        while(y<0){
            y++;
            cout<<"S";
        }


    // if((x==0 && y == 0)) {
    //     cout<<ch<<endl;
    // }
    // if(x >=0 and y >=0) {
    //     while(y>0){
    //         y--;
    //         cout<<"N";
    //     }
    //     while(x>0){
    //         x--;
    //         cout<<"E";
    //     }
    // } 

    // if(x <=0 and y>=0) {
    //     while(x<0) {
    //         x++;
    //         cout<<"W";
    //     }
    //     while(y>0){
    //        y--;
    //        cout<<"N"; 
    //     }
    // }

    // if(x<=0 and y<=0){
    //     while(x<0) {
    //         x++;
    //         cout<<"W";
    //     }
    //      while(y<0) {
    //         y++;
    //         cout<<"S";
    //     }
    // }

    // if(x>=0 and y<=0){
    //    while(x>0) {
    //         x++;
    //         cout<<"W";
    //     }
    //     while(y<0) {
    //         y++;
    //         cout<<"S";
    //     }
    // }


    return 0;
}