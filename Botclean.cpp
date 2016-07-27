#include<iostream>
#include<vector>
using namespace std;
void next_move(int posr, int posc, vector <string> board) {
    //add logic here
    int dst = 20,b,v,tm;
    if(board[posr][posc] == 'd') cout<<"CLEAN";
    else{
        for(int i=0;i<5;i++) 
            for(int j=0;j<5;j++) {
               if(board[i][j] == 'd'){
                   tm = abs(i-posr) + abs(j- posc);
                   if(tm < dst){
                       dst = tm;
                       b = i;
                       v = j;
                   }
               }
        }
          if(b > posr){
              cout<<"DOWN";
          }
        else if(b < posr){
            cout<<"UP";
        }
        else if(v > posc){
            cout<<"RIGHT";
        }
        else if(v < posc){
            cout<<"LEFT";
        }
    }
}
int main(void) {
    int pos[2];
    vector <string> board;
    cin>>pos[0]>>pos[1];
    for(int i=0;i<5;i++) {
        string s;cin >> s;
        board.push_back(s);
    }
    next_move(pos[0], pos[1], board);
    return 0;
}
