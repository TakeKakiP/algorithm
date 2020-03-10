#include <iostream>
using namespace std;

int main(){
    int a,b,c;

    a = 5;
    b = 3;
    c = 4;

    if(a > b){
        swap(a,b);
    }

    if(b > c){
        swap(b,c);
    }

    if(a > b){
        swap(a,b);
    }

    cout << a << " " << b << " " << c << endl;

    return 0;
}