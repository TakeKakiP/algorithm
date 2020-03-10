#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    int c;
    int x;
    int amari;
    int hantei;

    cin >> a >> b >> c;

    for(x = a; x <= b;x++){
        amari = c % x;

        if(amari == 0){
            hantei++;
        }
    }

    cout << hantei << endl;
}