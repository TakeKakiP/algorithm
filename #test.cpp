#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

    int H , W;

    while(cin >> H >> W){

        if(H == 0 && W == 0){
            break;
        }

        for(int x = 0; x < H;x++){
            for(int y = 0; y < W; y++){
                if(x == 0 || y == 0 || x == W - 1 || y == H - 1){
                    cout << "#";
                } else {
                    cout << ".";
                }
                
            }
            cout << endl;
        }

        cout << endl;

    }


}